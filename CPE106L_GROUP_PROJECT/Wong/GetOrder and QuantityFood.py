class Counter():
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

if __name__ == "__main__":
        class_counter = Counter()
        print("Which food/drink would you like to order? Enter 1-9")
        order_number = int(input())

        print("You have ordered", class_counter.GetOrder(order_number))
        quantity = class_counter.QuantityFood(order_number)
        

    
   




