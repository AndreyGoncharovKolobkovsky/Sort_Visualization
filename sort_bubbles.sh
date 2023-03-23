#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_3_bubbles.cpp -o sort_3_bubbles
./sort_3_bubbles

python3 PNGmaker.py << cat *.txt

python3 GIFmaker.py

rm *.txt *.png sort_3_bubbles

mv sort_visual.gif gif_bubbles.gif

echo YES WE CAN
#echo imdone
