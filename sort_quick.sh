#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_4_quick.cpp -o sort_4_quick
./sort_4_quick

python3 PNGmaker.py << cat *.txt

python3 GIFmaker.py

rm *.txt *.png sort_4_quick

mv sort_visual.gif gif_quick.gif

echo YES WE CAN
#echo imdone
