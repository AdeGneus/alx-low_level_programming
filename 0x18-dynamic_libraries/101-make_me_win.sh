#!/bin/bash
wget -q -O /tmp/win.so https://github.com/AdeGneus/alx-low_level_programming/raw/main/0x18-dynamic_libaries/win.so
export LD_PRELOAD=/tmp/win.so
