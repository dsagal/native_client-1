/*
 * Copyright (c) 2016 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "native_client/src/trusted/service_runtime/filename_util.h"

#include <errno.h>
#include <unistd.h>
#include <sys/param.h>

#include <string>
#include <vector>

using std::vector;
using std::string;

// TODO: In the context of sel_ldr, the important things are that ReadLink
// below interprets path as virtual, and returns link_path to be interpreted as
// virtual; and that getcwd() returns an absolute virtual path.

namespace {

string SEP = "/";
string CURDIR = ".";
string PARDIR = "..";


// TODO: getcwd and readlink should use proper calls in the virtual FS land.
//int32_t NaClSysGetcwd(struct NaClAppThread *natp, buffer, len);
//int32_t NaClSysReadlink(struct NaClAppThread *natp, uint32_t path,
//                        uint32_t buffer, uint32_t buffer_size);
bool GetCurrentDir(string *path) {
  char buf[MAXPATHLEN];
  char *ret = getcwd(buf, MAXPATHLEN);
  if (!ret) { return false; }
  path->assign(buf);
  return true;
}

bool ReadLink(const string &path, string *link_path) {
  char buf[MAXPATHLEN];
  ssize_t n = Readlink(path.c_str(), buf, MAXPATHLEN);
  if (n < 0) { return false; }
  link_path->assign(buf, n);
  return true;
}


/*
 * Returns true if str begins with prefix.
 */
bool StartsWith(const string &str, const string &prefix) {
  return str.rfind(prefix, 0) == 0;
}

/*
 * Returns true if str ends with suffix.
 */
bool EndsWith(const string &str, const string &suffix) {
  if (str.size() < suffix.size()) { return false; }
  size_t index = str.size() - suffix.size();
  return str.find(suffix, index) == index;
}

/*
 * Returns true if path is absolute (starts with /).
 */
bool IsAbsolute(const string &path) {
  return StartsWith(path, SEP);
}

/*
 * Returns whether path starts with path_prefix, considering whole components
 * only.
 *
 * E.g. "/foo/bar" starts with "/foo" or "/foo/", but not with "/f" or
 * "/foo/bar/". Paths may optionally end in a slash, but should otherwise be
 * normalized (e.g. no consecutive slashes).
 */
bool StartsWithPath(const string &path, const string &path_prefix) {
  return StartsWith(path, path_prefix) && (
    path.length() == path_prefix.length() ||
    EndsWith(path_prefix, SEP) ||
    path.substr(path_prefix.length(), 1) == SEP
  );
}

/*
 * If *path starts with prefix, replaces that prefix with repl and returns
 * true. Otherwise returns false and leaves *path unmodified.
 *
 * E.g. path of "/foo/bar" turns into "/FOO/bar" on replacing "/foo/" or "/foo"
 * with "/FOO" or "/FOO/", but returns false if prefix is "/f" or "/foo/bar/".
 */
bool ReplacePathPrefix(string *path,
                       const string &prefix, const string &repl) {
  if (StartsWithPath(*path, prefix)) {
    path->assign(JoinComponents(repl, path->substr(path_prefix.length())));
    return true;
  } else {
    return false;
  }
}

/*
 * Returns head joined with tail with a single "/" between them.
 */
string JoinComponents(const string &head, const string &tail) {
  string ret = head;
  if (!EndsWith(head, SEP)) {
    ret.append(SEP);
  }
  ret.append(tail, StartsWith(tail, SEP) ? SEP.size() : 0, string::npos);
  return ret;
}

/*
 * Removes and returns the part of path until the first slash, leaving path to
 * start with the character following the slash.
 */
string RemoveFirstComponent(string *path) {
  size_t pos = path->find(SEP);
  string ret = path->substr(0, pos);
  if (pos == string::npos) {
    path->clear();
  } else {
    path->erase(0, pos + SEP.size());
  }
  return ret;
}

/*
 * Removes and returns the part of path after the last slash, leaving path to
 * end with the character preceding the slash.
 */
string RemoveLastComponent(string *path) {
  size_t pos = path->rfind(SEP);
  string ret = path->substr(pos == string::npos ? 0 : pos + SEP.size());
  if (pos == string::npos) {
    path->clear();
  } else {
    path->erase(pos);
  }
  return ret;
}

/*
 * Implements both RealPath and AbsPath. The only difference is whether
 * it follows symlinks.
 */
bool RealPathImpl(string path, string *resolved_path, bool resolve_links) {

  // Ensure that we start with an absolute path (i.e. add cwd if relative).
  if (!IsAbsolute(path)) {
    string cwd;
    if (!GetCurrentDir(&cwd)) {
      return false;
    }
    path = JoinComponents(cwd, path);
  }

  // The invariants below are:
  // - done is an absolute path with all symlinks resolved.
  // - rest is relative to done (even if it starts with a slash).
  string done = SEP, rest = path;
  size_t resolved_path = 0;

  while (!rest.empty()) {
    string head = RemoveFirstComponent(&rest);
    if (head.empty() || head == CURDIR) {
      // Skip consecutive slashes and "." directories.
    } else if (head == PARDIR) {
      RemoveLastComponent(&done);
      if (done.empty()) {
        done = SEP;
      }
    } else if (resolve_links) {
      string new_path = JoinComponents(done, head);
      string link_path;
      if (ReadLink(new_path, &link_path)) {
        // Protect against infinite links.
        if (++link_path > MAXSYMLINKS) {
          errno = ELOOP;
          return false;
        }
        if (IsAbsolute(link_path)) {
          done = SEP;
        }
        rest = JoinComponents(link_path, rest);
      } else {
        // EINVAL is the common case when the file exists but isn't a symlink.
        if (errno != EINVAL) {
          return false;
        }
        done = new_path;
      }
    } else {
      done = JoinComponents(done, head);
    }
  }
  *resolved_path = done;
  return true;
}

}

bool AbsPath(string path, string *resolved_path) {
  return RealPath(path, resolved_path, false);
}

bool RealPath(string path, string *resolved_path) {
  return RealPath(path, resolved_path, true);
}
