from dessert2 import *
from tabulate import *

def main():
    Joes_order = order()
    Joes_order.add(Candy("Candy Corn", 1.5, .25))
    Joes_order.add(Candy("Gummy Bears", .25, .35))
    Joes_order.add(Cookie("Chocolate Chip", 6, 3.99))
    Joes_order.add(IceCream("Pistachio", 2, .79))
    Joes_order.add(Sundae("Vanilla", 3, .69, "Hot Fudge", 1.29))
    Joes_order.add(Cookie("Oatmeal Raisin", 2, 3.45))

    receipt = []
    for item in Joes_order.order:
        if isinstance(item, Candy):
            cost = item.weight * item.price_per_pound
            receipt.append([item.name, f"{round(item.weight, 2)} lbs", f"${cost:.2f}"])
        elif isinstance(item, Cookie):
            cost = (item.cookie_quantity / 12) * item.price_per_dozen
            receipt.append([item.name, f"{round(item.Dozens, 2)} Dozens", f"${cost:.2f}"])
        elif isinstance(item, IceCream):
            cost = item.scoop_count * item.price_per_scoop
            receipt.append([item.name, f"{round(item.scoop_count, 2)} scoops", f"${cost:.2f}"])
        elif isinstance(item, Sundae):
            ice_cream_cost = item.scoop_count * item.price_per_scoop
            total_cost = ice_cream_cost + item.topping_price
            receipt.append([f"{item.name} Sundae with {item.topping_name}", f"{round(item.scoop_count, 2)} scoops", f"${total_cost:.2f}"])
    print("Joe's Dessert Order")
    print("---------------------")
    print(tabulate(receipt, headers=["Dessert Items", "Weight", "Cost"], tablefmt="grid"))
    print(f"Total Items: {len(Joes_order)} \nTotal Cost: ${sum(float(row[2].strip('$')) for row in receipt):.2f} \nThank you for shopping at diabetes desserts!")
    print("---------------------")
    

main()