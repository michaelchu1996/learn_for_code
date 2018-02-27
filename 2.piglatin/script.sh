#!/bin/bash
#for testing the 2.piglatin.cpp

g++ 2.piglatin.cpp -o 2.out
./2.out <input/input >out.txt 2>err.txt
diff out.txt expectedoutput/out.txt > diff.txt