#!/usr/bin/env bash

mkdir -p build
cd build
mkdir -p release
mkdir -p debug

cd release
cmake -DCMAKE_BUILD_TYPE=Release ../..
make

cd ../debug
cmake -DCMAKE_BUILD_TYPE=Debug ../..
make

cd ../..