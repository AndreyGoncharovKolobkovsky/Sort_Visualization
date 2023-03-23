#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_6_insert.cpp
./sort_6_insert.cpp

python3 PNGmaker.py << cat *.txt

python3 GIFmaker.py

rm *.txt *.png

mv sort_visual.gif gif_insert.gif

echo YES WE CAN
#echo imdone
