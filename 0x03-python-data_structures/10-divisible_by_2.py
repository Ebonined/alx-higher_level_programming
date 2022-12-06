#!/usr/bin/python3

def divisible_by_2(my_list=[]):

    multi = []
    for value in my_list:
        if value % 2 == 0:
            multi.append(True)
        else:
            multi.append(False)

    return multi
