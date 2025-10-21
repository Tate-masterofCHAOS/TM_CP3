class DessertItem:
    name: str
    def __init__(self,name=""):
        self.name = name

class Candy(DessertItem):
    name: str 
    weight: float 
    price_per_pound: float 
    def __init__(self, name, weight=0.0, price_per_pound=0.0):
        super.__init__(name)
        self.price_per_pound = price_per_pound
        self.weight= weight

class Cookie(DessertItem):
    name: str 
    cookie_quantity: int 
    price_per_pound: float 
    def __init__(self, name, cookie_quantity=0, price_per_dozen=0.0):
        super.__init__(name)
        self.price_per_dozen = price_per_dozen
        self.cookie_quantity = cookie_quantity

class IceCream(DessertItem):
    name: str 
    scoop_count: int 
    price_per_scoop: float 
    def __init__(self, name, scoop_count, price_per_scoop):
        super.__init__(name)
        self.price_per_scoop = price_per_scoop
        self.scoop_count = scoop_count

class Sundae(IceCream):
    name: str 
    scoop_count: int 
    price_per_scoop: float 
    topping_name: str 
    topping_price: float 
    def __init__(self, name, scoop_count, price_per_scoop, topping_name, topping_price):
        super.__init__(name,price_per_scoop,scoop_count)
        self.topping_name = topping_name
        self.topping_price = topping_price

class order:
    def __init__(self):
        self.order = []
    
    def add(DessertItem):
        order.append(DessertItem)
    def __len__(self):
        return len(self.order)