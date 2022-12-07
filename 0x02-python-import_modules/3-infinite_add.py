#!/usr/bin/python3

if __name__ == "__main__":

    import sys

    add = 0

    for val in sys.argv[1:]:

        add = add + int(val)

    print("{}".format(add))
