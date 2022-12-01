#!/usr/bin/python3
for numv in range(0, 10):
    for num2 in range(numv + 1, 10):
        if numv == 8 and num2 == 9:
            print("{}{}".format(numv, num2))
        else:
            print("{}{}".format(numv, num2), end=", ")
