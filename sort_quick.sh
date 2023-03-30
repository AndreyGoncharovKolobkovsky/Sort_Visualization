#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_6_quick.cpp -o sort_6_quick
./sort_6_quick

d=$(<amount.txt)
for (( i=0; i<d; i++ )); do
        python3 PNGMaker.py < $i.txt
        mv pic.png $i.png
done


python3 GifMaker.py < amount.txt

rm *.txt *.png sort_6_quick

mv Sort_visual.gif gif_quick.gif

echo YES WE CAN
#echo imdone
