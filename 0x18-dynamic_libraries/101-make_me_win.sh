#!/bin/bash
wget -P .. https://raw.githubusercontent.com/davidmusau/alx-low_level_programming/master/0x18-dynamic_libraries/libgig.so
export LD_PRELOAD="$PWD/../libgiga.so"
