class DessertItem:
    name: str
    tax_percent: float
    def __init__(self,name="", tax_percent=7.25):
        self.name = name
        self.tax_percent = tax_percent

    def calculate_cost(self):
        pass

    def calculate_tax(self):
        tax = round(self.calculate_cost() * (self.tax_percent /100), 2)
        calculated_cost = self.calculate_cost() + tax
        return tax, calculated_cost

class Candy(DessertItem):
    name: str 
    weight: float 
    price_per_pound: float 
    def __init__(self, name, weight=0.0, price_per_pound=0.0):
        super().__init__(name)
        self.price_per_pound = price_per_pound
        self.weight= weight
    
    def calculate_cost(self):
        return round(self.weight * self.price_per_pound, 2)

class Cookie(DessertItem):
    name: str 
    cookie_quantity: int 
    price_per_pound: float 
    def __init__(self, name, cookie_quantity=0, price_per_dozen=0.0):
        super().__init__(name)
        self.price_per_dozen = price_per_dozen
        self.Dozens = cookie_quantity / 12
        self.cookie_quantity = cookie_quantity

    def calculate_cost(self):
        #calculate cost to second decimal
        return round((self.cookie_quantity / 12) * self.price_per_dozen, 2)

class IceCream(DessertItem):
    name: str 
    scoop_count: int 
    price_per_scoop: float 
    def __init__(self, name, scoop_count=0, price_per_scoop=0.0):
        super().__init__(name)
        self.price_per_scoop = price_per_scoop
        self.scoop_count = scoop_count

    def calculate_cost(self):
        return round(self.scoop_count * self.price_per_scoop, 2)

class Sundae(IceCream):
    name: str 
    scoop_count: int 
    price_per_scoop: float 
    topping_name: str 
    topping_price: float 
    def __init__(self, name, scoop_count=0, price_per_scoop=0.0, topping_name="", topping_price=0.0):
        super().__init__(name,price_per_scoop,scoop_count)
        self.topping_name = topping_name
        self.topping_price = topping_price

    def calculate_cost(self):
        return round((self.scoop_count * self.price_per_scoop) + self.topping_price, 2)

class order:
    def __init__(self):
        self.order = []
    
    def add(self, DessertItem):
        self.order.append(DessertItem)
    def __len__(self):
        return len(self.order)
    
