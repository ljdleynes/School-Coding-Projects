import time
import sqlite3
"""
Verification function (Line 91-104) 
GetMoney function (Line 73-89)
"""

conn = sqlite3.connect('CPE106L_GRP2.db')
cursor = conn.cursor()

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
    

    def fixed_length(self,text,length):
        if len(text) > length:
            text = text[:length]
        elif len(text) < length:
            text = (text + " " * length)[:length]
        return text

    def GetMoney(self,orderNum, quantityNum):
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
        item = price_list.get(orderNum)
        
        price = item*quantityNum
        
        return price
        
    def Verification(self, orderNum):
        print("\n-----ORDERS-----")
        print("\nITEM | AMOUNT")

        allOrders = orderNum
        displayOrder = cursor.execute('''SELECT Name, Amount FROM tbl_Foods WHERE f_ID = ?''', (allOrders,))
        for row in displayOrder:
            print(row)

        print("\nLoading...")
        time.sleep(5)

        verified = "\nYour order is verified!"
        return verified  
    
if __name__ == "__main__":
        class_counter = Counter()
        print("Which food/drink would you like to order? Enter 1-9")
        order_number = int(input())
        if order_number < 1 and order_number > 9:
            quit()

        print("You have ordered", class_counter.GetOrder(order_number))
        quantity = class_counter.QuantityFood(order_number)

        print(class_counter.Verification(order_number))
        print_price = print("\nTOTAL ORDER AMOUNT =", class_counter.GetMoney(order_number,quantity))

    
   




