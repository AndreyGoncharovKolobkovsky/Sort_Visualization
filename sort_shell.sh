#!/bin/bash

echo COME ON DUDE, LETS DO THIS
g++ sort_1_shell.cpp -o sort_1_shell
./sort_1_shell


python3 PNGmaker.py << cat *.txt


python3 GIFmaker.py

rm *.txt *.png sort_1_shell

mv sort_visual.gif gif_shell.gif

echo YES WE CAN
#echo imdone
