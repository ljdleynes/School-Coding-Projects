import os
import time
import random
import csv
import sqlite3
from matplotlib import pyplot as plt

path_to_db = os.path.join(os.path.dirname(__file__), "CPE106L_GRP2.db")
conn = sqlite3.connect(path_to_db)
cursor = conn.cursor()

class Notification:
    def Notification(self):
        pass
class OrdersNotif(Notification):
    def Notification(self):
        print("Orders Ready!")
class MonitorNotif(Notification):
    def Notification(self, WaitNumber):
        print(f"Number {WaitNumber} is ready" )

class Counter():
    def _init_():
        order_number = 0;
        order_time = 0;

    def GetOrder(self,food):
        switcher = {
            1: "Chicken Joy",
            2: "Burger Steak",
            3: "Spaghetti",
            4: "Cheese Burger",
            5: "Ice Cream",
            6: "Chicken Fillet",
            7: "Coke",
            8: "Ice Tea",
            9: "Sprite",
        }
        x = switcher.get(food, "Invalid input")
        return x

    def QuantityFood(self,food):
        print("\nHow many will you order?")
        food = int(input())
        return food
    

    def fixed_length(text,length):
        if len(text) > length:
            text = text[:length]
        elif len(text) < length:
            text = (text + " " * length)[:length]
        return text

    def DisplayMenu(self):
        path_to_menu = os.path.join(os.path.dirname(__file__), "tbl_Foods.csv")

        reader = csv.reader(open(path_to_menu,"r"))
        foodList = []
        for row in reader:
            foodList.append(row)
        header = foodList.pop(0)

        print()
        print()
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
        order_time = random.randint(60,180)

        while order_time:
            mins = order_time // 60
            secs = order_time % 60
            timer = '{:02d}:{:02d}'.format(mins, secs)
            print(timer, end="\r")
            time.sleep(1)
            order_time -= 1

    def GetMoney(self,orderNum):
        price = 0

        price_list = {
            1: 150,
            2: 80,
            3: 50,
            4: 30,
            5: 55,
            6: 100,
            7: 25,
            8: 35,
            9: 25
        } 

        for numbers in orderNum:
            item = price_list.get(numbers)

            price += item
        
        return price
        
    def Verification(self, orderList):
        print("\n-----ORDERS-----")
        print("\nITEM | AMOUNT")

        for number in orderList:
            displayOrder = cursor.execute('''SELECT Name, Amount FROM tbl_Foods WHERE f_ID = ?''', (number,))
            for row in displayOrder:
                print(row)

        moreOrders = input("\nProceed with transaction? [y/n]: ")        
        if moreOrders == "y" or moreOrders == "Y":
            time.sleep(3)
            verification = "\nYour order is verified!"
            return verification

        print("\nExiting...")
        time.sleep(5)

        if moreOrders == "n" or moreOrders == "N":
            quit()

        print("CRITICAL INPUT ERROR!")
        quit()

    def GiveOrderNumber(self):
        Monitor = MonitorNotif()
        WaitNumber = random.randint(1,100)
        Monitor.Notification(WaitNumber)

    def CheckOrder(self):
        moreOrders = input("\nWould you like to order more? [y/n]: ")        

        if moreOrders == "y":
            return True
        elif moreOrders == "n":
            return False
        
        quit()
       
    def DisplayOrderNumberProcess(self):
        OrderNot = OrdersNotif()
        class_counter = Counter()
        print ("\nYour order is still processing")
        class_counter.GetMaximumOrderTime()
        print("\nPreparing...")
        OrderNot.Notification()
        class_counter.GiveOrderNumber()

class BusinessAnalytics():
    def data(dataOfSales):
        dev_y = dataOfSales
        dev_x = ["Chicken Joy", "Burger Steak", "Spaghetti", "Cheeseburger", "Ice Cream", "Chicken Fillet", "Coke", "Ice Tea", "Sprite"]
        plt.bar(dev_x, dev_y)
        plt.xlabel("Food Items")
        plt.ylabel("Amount of Orders")
        plt.title("Total Numbers of Orders")  
        plt.show()

if __name__ == "__main__":
        #Declaration
        class_counter = Counter()
        more_orders = True
        listOrder = []
        data_list = []

        with open('count.txt', 'r') as file: # data analytics
            lines = file.readlines()
            for data in lines:
                data_list.append(data)
            file.close()
        
        num_list_ba = [int(x) for x in data_list] # end data analytics

        '''start program'''

        # open logo file
        path_to_logo = os.path.join(os.path.dirname(__file__), 'CPE106L_LOGO.txt')
        f = open(path_to_logo,"r")

        # logo
        ascii = "".join(f.readlines())
        print(ascii)

        # loading
        time.sleep(5)
        os.system('cls')

        # main

        class_counter.DisplayMenu()

        while more_orders == True: #multiple order loop
            foodOrder = int(input("Enter order: "))
            listOrder.append(foodOrder)
            print("\nYour order is", class_counter.GetOrder(foodOrder))

            more_orders = class_counter.CheckOrder()
        
        if more_orders == False:
            class_counter.Verification(listOrder)
            print("\nYour total bill is:", class_counter.GetMoney(listOrder)) # billing
            class_counter.DisplayOrderNumberProcess()
            print("\nLoading...")
            time.sleep(3)

        view_ba = input("\nWould you like to view the business analytics? [y/n] ")
        if view_ba == "y" or view_ba == "Y":
            for items in listOrder:
                if items == 1:
                    num_list_ba[0] += 1
                if items == 2:
                    num_list_ba[1] += 1  
                if items == 3:
                    num_list_ba[2] += 1  
                if items == 4:
                    num_list_ba[3] += 1
                if items == 5:
                    num_list_ba[4] += 1
                if items == 6:
                    num_list_ba[5] += 1
                if items == 7:
                    num_list_ba[6] += 1
                if items == 8:
                    num_list_ba[7] += 1
                if items == 9:
                    num_list_ba[8] += 1

            str_list_ba = [str(y) for y in num_list_ba]
            with open('count.txt', 'w') as file:
                file.truncate(0)
                for line in str_list_ba:
                    file.write(line)
                    file.write('\n')
                    
            BusinessAnalytics.data(num_list_ba)
        
        print("\nThank you and have a great day!")






    
   




