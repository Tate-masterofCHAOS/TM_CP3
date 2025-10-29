from dessert2 import *
from tabulate import *

class DessertShop:
    def user_prompt_candy():
        pass
    def user_prompt_cookie():
        pass
    def user_prompt_icecream():
        pass
    def user_prompt_sundae():
        pass

def main():
    Joes_order = order()
    choice = input("Welcome to Joe's Dessert Shop! Would you like to order a \n1: Candy \n2: Cookie \n3:Ice Cream \n4: Sundae \n5: Finish order")
    if choice == '1':
        Joes_order.order.append(DessertShop.user_prompt_candy())
    elif choice == '2':
        Joes_order.order.append(DessertShop.user_prompt_cookie())

    receipt = []
    for item in Joes_order.order:
        if isinstance(item, Candy):
            cost = item.weight * item.price_per_pound
            receipt.append([item.name, f"{round(item.weight, 2)} lbs", f"${item.calculate_cost():.2f}", f"${item.calculate_tax()[1]:.2f}"])
        elif isinstance(item, Cookie):
            cost = (item.cookie_quantity / 12) * item.price_per_dozen
            receipt.append([item.name, f"{round(item.Dozens, 2)} Dozens", f"${item.calculate_cost():.2f}", f"${item.calculate_tax()[1]:.2f}"])
        elif isinstance(item, IceCream):
            cost = item.scoop_count * item.price_per_scoop
            receipt.append([item.name, f"{round(item.scoop_count, 2)} scoops", f"${item.calculate_cost():.2f}", f"${item.calculate_tax()[1]:.2f}"])
        elif isinstance(item, Sundae):
            ice_cream_cost = item.scoop_count * item.price_per_scoop
            total_cost = ice_cream_cost + item.topping_price
            receipt.append([f"{item.name} Sundae with {item.topping_name}", f"${item.calculate_cost():.2f}", f"${item.calculate_tax()[1]:.2f}"])
    print("Joe's Dessert Order")
    print("---------------------------------------------")
    print(tabulate(receipt, headers=["Dessert Items", "Weight", "Cost", "Tax"], tablefmt="grid"))
    print(f"Total Items: {len(Joes_order)} \nTotal Taxed Cost: ${sum(item.calculate_tax()[0] for item in Joes_order.order):.2f} \nTotal Cost: ${sum(float(row[2].strip('$')) for row in receipt):.2f} \nThank you for shopping at diabetes desserts!")
    print("---------------------------------------------")
    

main()