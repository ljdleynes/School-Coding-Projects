class CPE106L_GRP2(object):
    """description of class"""

import os
import time
import random
import csv



class Counter(): 
    def _init_():
        order_number = 0;
        order_time = 0;

    def fixed_length(text,length):
        if len(text) > length:
            text = text[:length]
        elif len(text) < length:
            text = (text + " " * length)[:length]
        return text

    def DisplayMenu(self):
        reader = csv.reader(open("tbl_Foods.csv","r"))
        foodList = []
        for row in reader:
            foodList.append(row)
        header = foodList.pop(0)

        print("\t\t\t\t\t  __  __ ___ _  _ _   _ ")
        print("\t\t\t\t\t |  \/  | __| \| | | | |")
        print("\t\t\t\t\t | |\/| | _|| .` | |_| |")
        print("\t\t\t\t\t |_|  |_|___|_|\_|\___/ ")
        print()
        
        
        print("\t\t\t"+ ("#" * 55))
        print("\t\t\t#", end = " ")
        for column in header:
            print(Counter.fixed_length(column,13), end = "  #  ")
        print()
        print("\t\t\t"+ ("#" * 55))

        for row in foodList:
            print("\t\t\t# ", end = " ")
            for column in row:
                print(Counter.fixed_length(column,13), end = "  #  ")
            print()
        print("\t\t\t"+ ("#" * 55))

 
    def GetMaximumOrderTime(self):
        order_time = random.randint(60,900)

        while order_time:
            mins = order_time // 60
            secs = order_time % 60
            timer = '{:02d}:{:02d}'.format(mins, secs)
            print(timer, end="\r")
            time.sleep(1)
            order_time -= 1                   


def test():
    sf = Counter()
    sf.GetMaximumOrderTime()

if __name__ == "__main__":
    f = open("CPE106L_LOGO.txt","r")
    ascii = "".join(f.readlines())
    print(ascii)
    test()

