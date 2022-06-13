#!/bin/bash
wget -P /tmp https://github.com/tallninja/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD=/tmp/libinject.so
