#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_1_shell.cpp -o sort_1_shell
./sort_1_shell


python3 PNGMaker.py << cat *.txt


python3 GifMaker.py

rm *.txt *.png sort_1_shell

mv sort_visual.gif gif_shell.gif

echo YES WE CAN
#echo imdone
