#!/usr/bin/python3

from sys import argv

if len(argv) == 2:
    print("{} argument:".format(len(argv) - 1))
elif len(argv) > 2:
    print("{} arguments:".format(len(argv) - 1))

for i,arg in enumerate(argv):
    
    if i == 0:
        continue
    else:
        print("{0} {1}".format(i, arg))
