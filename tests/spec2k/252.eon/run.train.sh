#!/bin/bash

set -o nounset
set -o errexit

PREFIX=${PREFIX:-}
VERIFY=${VERIFY:-yes}
EMU_HACK=${EMU_HACK:-yes}


DASHDASH=""
if [[ "${PREFIX}" =~ sel_ldr ]] ; then
  DASHDASH="--"
fi

rm -f  *.out chair.* materials spectra.dat  eon.dat pixel_*

ln -s  data/train/input/* .

LIST="pixels_out.cook  pixels_out.kajiya pixels_out.rushmeier"

${PREFIX} $1 ${DASHDASH} chair.control.kajiya chair.camera chair.surfaces chair.kajiya.ppm ppm pixels_out.kajiya \
  > stdout1.out 2> stderr1.out

${PREFIX} $1 ${DASHDASH} chair.control.cook chair.camera chair.surfaces chair.cook.ppm, ppm pixels_out.cook \
  > stdout2.out 2> stderr2.out

${PREFIX} $1 ${DASHDASH} chair.control.rushmeier chair.camera chair.surfaces  chair.rushmeier.ppm ppm pixels_out.rushmeier \
  > stdout3.out 2> stderr3.out


if [[ "${VERIFY}" != "no" ]] ; then
  echo "VERIFY"
  for i in ${LIST} ; do
    ../specdiff.sh -a 0.005  $i  data/train/output/$i
  done
fi

echo "OK"
