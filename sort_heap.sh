#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_4_heap.cpp -o sort_4_heap
./sort_4_heap

d=$(<amount.txt)
for (( i=0; i<d; i++ )); do
        python3 PNGMaker.py < $i.txt
        mv pic.png $i.png
done


python3 GifMaker.py < amount.txt

rm *.txt *.png sort_4_heap

mv Sort_visual.gif gif_heap.gif

echo YES WE CAN
#echo imdone
