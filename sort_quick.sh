#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_4_quick.cpp
./sort_4_quick.cpp

python3 PNGmaker.py << cat *.txt

python3 GIFmaker.py

rm *.txt *.png

mv sort_visual.gif gif_quick.gif

echo YES WE CAN
#echo imdone
