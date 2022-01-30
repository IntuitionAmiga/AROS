#!/bin/bash
rm -f config.guess
rm -f config.sub
wget https://git.savannah.gnu.org/cgit/config.git/plain/config.guess
wget https://git.savannah.gnu.org/cgit/config.git/plain/config.sub

./configure --with-gcc-version=10.2.0 --target=haiku
make -j8

