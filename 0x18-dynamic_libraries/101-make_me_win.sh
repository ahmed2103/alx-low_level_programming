#!/bin/bash
wget -P /tmp https://github.com/ahmed2103/alx-low_level_programming/raw/main/0x18-dynamic_libraries/mu_first_injection.so
export LD_PRELOAD=/tmp/mu_first_injection.so

