# TM CP3 Classes

class Animal():
    def __init__(self, age, color):
        self.age = age
        self.color = color

    def move(self):
        print("Run")

    def __str__(self):
        return f"Age: {self.age}\nColor: {self.color}"
    
    def __eq__(self, other):
        return (self.age == other.age and self.color == other.color)
    

class Dog(Animal):
    def __init__(self, age, color, owner, breed, name):
        super().__init__(age, color)
        self.owner = owner
        self.breed = breed
        self.name = name
    
    def __str__(self):
        return f"Name: {self.name}\nAge: {self.age}\nBreed: {self.breed}\nColor: {self.color}\nOwner: {self.owner}"
    
    def __eq__(self, other):
        return (self.age == other.age and self.owner == other.owner and self.name == other.name and self.color == other.color and self.breed == other.breed)
    
bobby = Dog(5, "brown", "Jill", "Bulldog", "Bobby")
alex = Animal(16, "White")
nick = Animal(16, "White")
birdy = Dog(1, "Black", "Nikkie", "Lab", "Birdy")

print(f"{bobby}")
bobby.move()
print(f"\n{alex}\n")
print(f"{nick}\n")
print(f"{birdy}\n")
print(f"{alex == nick}\n")
print(f"{bobby == birdy}\n")

'''
What is a parent/abstract class?
    An abstract class that has children
How do you create a child class?
    class Dog(Animal):
How does a child class inherit from the parent class?
    super()
What are class diagrams?
    diagrams to model classes
How are class diagrams used to show a parent/child relationship?
    Arrows
How do you overload operators in a class?
    __eg__() and other symbols
What are test cases?
    A test case is a function that checks your code to make it sure it is meeting certain conditions
Why do we use test cases?
    make sure we dont break code weve already made
How do we create test cases?
    Create a file that is test_normal file name and inside we import our classes from our main file and set up the name of the test case the same way you set up the name of the file and use assert
'''