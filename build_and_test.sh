#!/bin/bash
set -e

mkdir -p build
cd build
cmake ..
make

./memento_test

sudo checkinstall --pkgname=memento-pattern --pkgversion=1.0 --backup=no --fstrans=no --install=no --nodoc -y

mv *.deb ../
cd ..
echo "Deb package created successfully"
