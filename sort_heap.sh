#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_5_heap.cpp -o sort_5_heap
./sort_5_heap

d=$(<amount.txt)
for (( i=0; i<d; i++ )); do
        python3 PNGMaker.py < $i.txt
        mv pic.png $i.png
done


python3 GifMaker.py < amount.txt

rm *.txt *.png sort_5_heap

imv Sort_visual.gif gif_heap.gif

echo YES WE CAN
#echo imdone
