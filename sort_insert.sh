#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_6_insert.cpp -o sort_6_insert
./sort_6_insert

d=$(<amount.txt)
for (( i=0; i<d; i++ )); do
        python3 PNGMaker.py < $i.txt
        mv pic.png $i.png
done

python3 GifMaker.py < amount.txt

rm *.txt *.png sort_6_insert

mv Sort_visual.gif gif_insert.gif

echo YES WE CAN
#echo imdone
