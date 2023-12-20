import unittest
from Counter import Counter

class TestGetOrder(unittest.TestCase):
    """This class inherits the unittest.TestCase from unittest library"""

    def test_GetOrder(self): #This function tests the GetOrder function in the counter class
        counter_class = Counter()
        self.assertEqual(counter_class.GetOrder(3), "Spaghetti")
    def test_QuantityFood(self): #This function tests the QuantityFood function in the counter class
        counter_class = Counter()
        self.assertEqual(counter_class.QuantityFood(10), 10)
    def test_fixedLength(self): #This function tests the fixed_length function in the counter class
        counter_class = Counter()
        self.assertEqual(counter_class.fixed_length("Hello", 5), "Hello")
    def test_GetMoney(self): #This function tests the GetMoney function in the counter class
        counter_class = Counter()
        self.assertEqual(counter_class.GetMoney(1,2),300)

if __name__ == '__main__':
    unittest.main()




