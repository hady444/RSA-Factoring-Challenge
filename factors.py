#!/usr/bin/python3
import sys
my_file = open(sys.argv[1], 'r')
for line in my_file:
    number = int(line)
    i=2
    while True:
        if number % i == 0:
            print("{}={}*{:d}".format(number, int(number / i), i))
            break
        i+=1
