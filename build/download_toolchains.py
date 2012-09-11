#!/usr/bin/python
# Copyright (c) 2012 The Native Client Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

"""Download all Native Client toolchains for this platform.

This module downloads multiple tgz's and expands them.
"""

import cygtar
import download_utils
import optparse
import os
import sys
import tempfile
import toolchainbinaries


SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PARENT_DIR = os.path.dirname(SCRIPT_DIR)


def LoadVersions(filepath):
  """Load version data from specified filepath into a dictionary.

  Arguments:
    filepath: path to the file which will be loaded.
  Returns:
    A dictionary of KEY:VALUE pairs.
  """
  versions = {}
  version_lines = open(filepath, 'r').readlines()
  for line_num, line in enumerate(version_lines, start=1):
    line = line.strip()
    if line.startswith('#'):
      continue

    if line == '':
      continue

    if '=' not in line:
      raise RuntimeError('Expecting KEY=VALUE in line %d:\n\t>>%s<<' %
                         (line_num, line))

    key, val = line.split('=', 1)
    versions[key] = val
  return versions


def VersionSelect(versions, flavor):
  """Determine svn revision based on version data and flavor.

  Arguments:
    versions: version data loaded from file.
    flavor: kind of tool.
  Returns:
    An svn version number.
  """

  if 'pnacl' in flavor:
    return versions['PNACL_VERSION']
  if 'glibc' in flavor:
    return versions['GLIBC_VERSION']
  if 'arm-trusted' in flavor:
    return versions['ARM_TRUSTED_VERSION']
  return versions['NEWLIB_VERSION']


def HashKey(flavor):
  """Generate the name of the key for this flavor's hash.

  Arguments:
    flavor: kind of tool.
  Returns:
    The string key for the hash.
  """
  return 'NACL_TOOL_%s_HASH' % flavor.upper()


def HashSelect(versions, flavor):
  """Determine expected hash value based on version data and flavor.

  Arguments:
    versions: version data loaded from file.
    flavor: kind of tool.
  Returns:
    A SHA1 hash.
  """
  return versions[HashKey(flavor)]


def IsFlavorNeeded(options, flavor):
  if options.filter_out_predicates:
    for predicate in options.filter_out_predicates:
      if predicate(flavor):
        return False
  return True


def GetUpdatedDEPS(options, versions):
  """Return a suggested DEPS toolchain hash update for all platforms.

  Arguments:
    options: options from the command line.
  """
  flavors = set()
  for platform in toolchainbinaries.PLATFORM_MAPPING:
    pm = toolchainbinaries.PLATFORM_MAPPING[platform]
    for arch in pm:
      for flavor in pm[arch]:
        if IsFlavorNeeded(options, flavor):
          flavors.add(flavor)
  new_deps = {}
  for flavor in flavors:
    url = toolchainbinaries.EncodeToolchainUrl(
      options.base_url, VersionSelect(versions, flavor), flavor)
    new_deps[flavor] = download_utils.HashUrl(url)
  return new_deps


def ShowUpdatedDEPS(options, versions):
  """Print a suggested DEPS toolchain hash update for all platforms.

  Arguments:
    options: options from the command line.
  """
  for flavor, value in sorted(GetUpdatedDEPS(options, versions).iteritems()):
    keyname = HashKey(flavor)
    print '%s=%s' % (keyname, value)
    sys.stdout.flush()


def SyncFlavor(flavor, url, dst, hash, min_time, keep=False, force=False,
               verbose=False):
  """Sync a flavor of the nacl toolchain

  Arguments:
    flavor: short directory name of the toolchain flavor.
    url: url to download the toolchain flavor from.
    dst: destination directory for the toolchain.
    hash: expected hash of the toolchain.
  """

  toolchain_dir = os.path.join(PARENT_DIR, 'toolchain')
  if not os.path.exists(toolchain_dir):
    os.makedirs(toolchain_dir)
  download_dir = os.path.join(toolchain_dir, '.tars')

  prefix = 'tmp_unpacked_toolchain_'
  suffix = '.tmp'

  # Attempt to cleanup.
  for path in os.listdir(toolchain_dir):
    if path.startswith(prefix) and path.endswith(suffix):
      full_path = os.path.join(toolchain_dir, path)
      try:
        print 'Cleaning up %s...' % full_path
        download_utils.RemoveDir(full_path)
      except Exception, e:
        print 'Failed cleanup with: ' + str(e)

  # Build the tarfile name from the url
  filepath = os.path.join(download_dir, url.split('/')[-1])

  # If we are forcing a sync, then ignore stamp
  if force:
    stamp_dir = None
  else:
    stamp_dir = dst

  # If we did not need to synchronize, then we are done
  if not download_utils.SyncURL(url, filepath, stamp_dir=stamp_dir,
                                min_time=min_time, hash=hash,
                                keep=keep, verbose=verbose):
    return False

  # If we didn't already have an expected hash (which must have matched the
  # actual hash), compute one so we can store it in the stamp file.
  if hash is None:
    hash = download_utils.HashFile(filepath)

  untar_dir = tempfile.mkdtemp(
      suffix=suffix, prefix=prefix, dir=toolchain_dir)
  try:
    tar = cygtar.CygTar(filepath, 'r:*', verbose=verbose)
    curdir = os.getcwd()
    os.chdir(untar_dir)
    try:
      tar.Extract()
      tar.Close()
    finally:
      os.chdir(curdir)

    if not keep:
      os.remove(filepath)

    # TODO(bradnelson_): get rid of this when toolchain tarballs flattened.
    if 'arm' in flavor or 'pnacl' in flavor:
      src = os.path.join(untar_dir)
    elif 'newlib' in flavor:
      src = os.path.join(untar_dir, 'sdk', 'nacl-sdk')
    else:
      src = os.path.join(untar_dir, 'toolchain', flavor)
    download_utils.MoveDirCleanly(src, dst)
  finally:
    try:
      download_utils.RemoveDir(untar_dir)
    except Exception, e:
      print 'Failed cleanup with: ' + str(e)
      print 'Continuing on original exception...'
  download_utils.WriteSourceStamp(dst, url)
  download_utils.WriteHashStamp(dst, hash)
  return True


def ParseArgs(args):
  parser = optparse.OptionParser()
  parser.add_option(
      '-b', '--base-url', dest='base_url',
      default=toolchainbinaries.BASE_DOWNLOAD_URL,
      help='base url to download from')
  parser.add_option(
      '-c', '--hashes', dest='hashes',
      default=False,
      action='store_true',
      help='Calculate hashes.')
  parser.add_option(
      '-k', '--keep', dest='keep',
      default=False,
      action='store_true',
      help='Keep the downloaded tarballs.')
  parser.add_option(
      '-q', '--quiet', dest='verbose',
      default=True,
      action='store_false',
      help='Produce less output.')
  parser.add_option(
      '--toolchain-dir', dest='toolchain_dir',
      default=os.path.join(PARENT_DIR, 'toolchain'),
      help='(optional) location of toolchain directory')
  parser.add_option(
      '--nacl-newlib-only', dest='filter_out_predicates',
      action='append_const', const=toolchainbinaries.IsNotNaClNewlibFlavor,
      help='download only the non-pnacl newlib toolchain')
  parser.add_option(
      '--save-downloads-dir', dest='save_downloads_dir',
      default=None,
      help='(optional) preserve the toolchain archives to this dir')
  parser.add_option(
      '--no-pnacl', dest='filter_out_predicates', action='append_const',
      const=toolchainbinaries.IsPnaclFlavor,
      help='Filter out PNaCl toolchains.')
  parser.add_option(
      '--no-x86', dest='filter_out_predicates', action='append_const',
      const=toolchainbinaries.IsX86Flavor,
      help='Filter out x86 toolchains.')
  parser.add_option(
      '--no-pnacl-translator', dest='filter_out_predicates',
      action='append_const',
      const=toolchainbinaries.IsSandboxedTranslatorFlavor,
      help='Filter out PNaCl sandboxed translator.')
  parser.add_option(
      '--no-arm-trusted', dest='filter_out_predicates', action='append_const',
      const=toolchainbinaries.IsArmTrustedFlavor,
      help='Filter out trusted arm toolchains.')
  options, args = parser.parse_args(args)

  if len(args) > 1:
    parser.error('Expecting only one version file.')
  return options, args


def ScriptDependencyTimestamp():
  """Determine the timestamp for the most recently changed script."""
  src_list = ['download_toolchains.py', 'download_utils.py',
              'cygtar.py', 'http_download.py']
  srcs = [os.path.join(SCRIPT_DIR, src) for src in src_list]
  src_times = []

  for src in srcs:
    src_times.append(os.stat(src).st_mtime)
  return sorted(src_times)[-1]


def main(args):
  script_time = ScriptDependencyTimestamp()
  options, version_files = ParseArgs(args)

  # If not provided, default to native_client/toolchain_versions.txt
  if not version_files:
    version_files = [os.path.join(PARENT_DIR, 'TOOL_REVISIONS')]
  versions = LoadVersions(version_files[0])

  if options.hashes:
    print '  (Calculating, may take a second...)'
    print '-' * 70
    sys.stdout.flush()
    ShowUpdatedDEPS(options, versions)
    print '-' * 70
    return 0

  platform = download_utils.PlatformName()
  arch = download_utils.ArchName()
  flavors = [flavor
             for flavor in toolchainbinaries.PLATFORM_MAPPING[platform][arch]
             if IsFlavorNeeded(options, flavor)]

  for flavor in flavors:
    version = VersionSelect(versions, flavor)
    url = toolchainbinaries.EncodeToolchainUrl(
      options.base_url, version, flavor)
    dst = os.path.join(options.toolchain_dir, flavor)
    if version == 'latest':
      print flavor + ': downloading latest version...'
      force = True
    else:
      force = False
    hash_value = HashSelect(versions, flavor)

    try:
      if SyncFlavor(flavor, url, dst, hash_value, script_time, force=force,
                    keep=options.keep, verbose=options.verbose):
        print flavor + ': updated to version ' + version + '.'
      else:
        print flavor + ': already up to date.'
    except download_utils.HashError, e:
      print str(e)
      print '-' * 70
      print 'You probably want to update the %s hashes to:' % version_files[0]
      print '  (Calculating, may take a second...)'
      print '-' * 70
      sys.stdout.flush()
      ShowUpdatedDEPS(options, versions)
      print '-' * 70
      return 1
  return 0


if __name__ == '__main__':
  sys.exit(main(sys.argv[1:]))
