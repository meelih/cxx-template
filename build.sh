#!/bin/bash
# this script should be run from main directory


if ! [ -d "build" ];then
	mkdir build
fi

pushd build
cmake ../src
make
