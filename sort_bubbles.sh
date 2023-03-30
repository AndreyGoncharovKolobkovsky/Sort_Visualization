#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_3_bubbles.cpp -o sort_3_bubbles
./sort_3_bubbles

d=$(<amount.txt)
for (( i=0; i<d; i++ )); do
        python3 PNGMaker.py < $i.txt
        mv pic.png $i.png
done


python3 GifMaker.py < amount.txt

rm *.txt *.png sort_3_bubbles

mv Sort_visual.gif gif_bubbles.gif

echo YES WE CAN
#echo imdone