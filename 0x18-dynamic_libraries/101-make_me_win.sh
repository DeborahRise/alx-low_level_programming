#!/bin/bash
wget -q -P /tmp https://github.com/DeborahRise/alx-low_level_programming/raw/master/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD=/tmp/jackpot.so
