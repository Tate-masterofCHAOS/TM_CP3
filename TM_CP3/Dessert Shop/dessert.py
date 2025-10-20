class DessertItem:
    def __init__(self,name):
        self.name = name

class Candy:
    def __init__(self, name, price_per_pound, amount):
        super.__init__(name)
        self.name = name
        self.price_per_pound = price_per_pound
        self.amount= amount

class IceCream:
    def __init__(self, name, price_per_scoop, scoops):
        super.__init__(name)
        self.name = name
        self.price_per_scoop = price_per_scoop
        self.scoops = scoops

class Cookies:
    def __init__(self, name, price_per_dozen, amount_of_cookies):
        super.__init__(name)
        self.name = name
        self.price_per_dozen = price_per_dozen
        self.amount_of_cookies = amount_of_cookies

class Sundae:
    def __init__(self, name, price_per_scoop, scoops, topping_name, topping_price):
        super.__init__(name,price_per_scoop,scoops)
        self.name = name
        self.price_per_scoop = price_per_scoop
        self.scoops = scoops
        self.topping_name = topping_name
        self.topping_price = topping_price

class order:
    def __init__(self):
        self.order = []
    
    def add(DessertItem):
        order.append(DessertItem)
    def __len__():
        pass