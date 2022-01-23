#!/bin/bash
cp /boot/home/src/buildtools/libtool/config.guess .
./configure --with-gcc-version=10.2.0 --target=haiku
make -j8

