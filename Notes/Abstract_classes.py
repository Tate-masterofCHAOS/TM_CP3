# TM CP3 Abstract Classes Notes
from abc import ABC, abstractmethod

class Animal(ABC):
    def __init__(self, name):
        self.name = name

    def __str__(self):
        return self.name

    @abstractmethod
    def move(self):
        pass


class Quadrupeds(Animal):
    def __init__(self,name):
        super().__init__(name)

    def move(self):
        print(f"{self.name} can walk or run.")

class Aquatic(Animal):
    def __init__(self,name):
        super().__init__(name)

    def move(self):
        print(f"{self.name} can swim.")

class SeaLion(Aquatic, Quadrupeds):
    def __init__(self, name):
        super().__init__(name)

    def eats(self):
        print(f"{self.name} eats krill.")

sealion = SeaLion("Greg")

print(sealion)
sealion.move()
sealion.eats()
print(Aquatic.mro())



#NOTES 
'''Why can't you create an object from an abstract class?
    Too Abstract
How do abstract classes and abstract methods work together?
    An abstract class must have at least one abstract methods
What does abc stand for?
    Abstract Base Class
What are decorators? 
    starts wiht an @ symbol used to say what comes after
What is an abstract method?
    An abstract method is a method in an abstract class made to be overwritten by children
What is a concrete method?
    Concrete methods are just methods that we write normally
What is an abstract class?
    a class that is designed to be overwritten
How do you make an abstract method?
    @abstractmethod
    def move(self):
        pass
How can you create a class that inherits from multiple parent classes?
    class SeaLion(Aquatic, Quadrupeds):
Why does the inheritance order matter?
    We have to inherit stuff in the correct order
What does the mro() method do when you call it on a class?
    TEells us which classes we inherit from first
What is Method resolution order?
    Tells us which classes we inherit from first
'''