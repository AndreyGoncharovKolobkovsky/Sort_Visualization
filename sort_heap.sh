#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_5_heap.cpp -o sort_5_heap
./sort_5_heap

python3 PNGmaker.py << cat *.txt

python3 GIFmaker.py

rm *.txt *.png sort_5_heap

mv sort_visual.gif gif_heap.gif

echo YES WE CAN
#echo imdone
