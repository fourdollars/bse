#! /usr/bin/env bash

aclocal
autoheader
libtoolize --automake --copy --ltdl
automake --add-missing --foreign
autoconf
