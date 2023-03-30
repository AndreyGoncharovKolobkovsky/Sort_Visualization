#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_2_gnome.cpp -o sort_2_gnome
./sort_2_gnome

d=$(<amount.txt)
for (( i=0; i<d; i++ )); do
        python3 PNGMaker.py < $i.txt
        mv pic.png $i.png
done


python3 GifMaker.py < amount.txt

rm *.txt *.png sort_2_gnome

mv Sort_visual.gif gif_gnome.gif

echo YES WE CAN
#echo imdone
