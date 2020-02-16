#!/usr/bin/env bash

set -e

echo ======== BUNDLE SYMENGINE SOURCE ==========

if ! test -f DESCRIPTION; then
    echo 1>&2 "Wrong directory"
    exit 1
fi

PKG_DIR=`pwd`
SYMENGINE_COMMIT=1db91f876c3fe5d214f97cdcc5c9e46558b250c2

echo === Bundle source from commit: $SYMENGINE_COMMIT

test -d symengine_source && rm -r symengine_source || true
mkdir symengine_source

curl -L "https://github.com/symengine/symengine/archive/$SYMENGINE_COMMIT.tar.gz" 2>/dev/null | \
    tar -xz -C symengine_source/

test -d src/upstream && rm -r src/upstream || true
mv symengine_source/symengine-"$SYMENGINE_COMMIT" src/upstream

rm -r symengine_source

echo === Apply patch

# diffstat may not be available
diffstat -p0 ./tools/symengine_patch.diff || true
patch -p0 <./tools/symengine_patch.diff

echo === Remove some unnecessary files in src/upstream

set -x

rm -r src/upstream/symengine/utilities/catch
rm -r src/upstream/symengine/tests
rm -r src/upstream/benchmarks
rm -r src/upstream/bin
rm -r src/upstream/doc
rm -r src/upstream/notebooks
rm -r src/upstream/binder
rm    src/upstream/appveyor.yml
rm    src/upstream/codecov.yml
rm    src/upstream/.travis.yml

set +x

echo === diff src/upstream/LICENSE inst/COPYRIGHTS

diff src/upstream/LICENSE inst/COPYRIGHTS || true

echo === touch ./tools/SYMENGINE_BUNDLED

touch ./tools/SYMENGINE_BUNDLED

echo ======== BUNDLE SYMENGINE SOURCE DONE ==========