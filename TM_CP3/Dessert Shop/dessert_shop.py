from dessert import *

def main():
    Joes_order = order()
    Joes_order(Candy("Candy Corn", 1.5, .25))
    Joes_order(Candy("Gummy Bears", .25, .35))
    Joes_order(Cookie("Chocolate Chip", 6, 3.99))
    Joes_order(IceCream("Pistachio", 2, .79))
    Joes_order(Sundae("Vanilla", 3, .69, "Hot Fudge", 1.29))
    Joes_order(Cookie("Oatmeal Raisin", 2, 3.45))
    print("Joe's Dessert Order")
    print("---------------------")
    for item in Joes_order.order:
        print(item.name)
    print("---------------------")
    print(f"Number of items: {len(Joes_order)}")

main()