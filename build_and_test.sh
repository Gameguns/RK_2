#!/bin/bash
set -e

# Удаляем старую папку build
rm -rf build

mkdir -p build
cd build
cmake ..
make

# Запуск теста
./memento_test

# Установка
sudo make install || true

# Упаковка
sudo checkinstall --pkgname=memento-pattern --pkgversion=1.0 --backup=no --fstrans=no --install=no --nodoc -y

mv *.deb ../
cd ..
echo "Deb package created successfully"
