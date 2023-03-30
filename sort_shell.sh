#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_1_shell.cpp -o sort_1_shell
./sort_1_shell

d=$(<amount.txt)
for (( i=0; i<d; i++ )); do
	python3 PNGMaker.py < $i.txt
	mv pic.png $i.png
done


python3 GifMaker.py < amount.txt

rm *.txt *.png sort_1_shell

mv Sort_visual.gif gif_quick.gif

echo YES WE CAN
#echo imdone
