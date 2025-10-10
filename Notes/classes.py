#TM CP3 classes

class Person:
    '''Person class with first and last names as well as age. 
    Method to get full name, increase age by 1'''
    _first_name: str
    last_name: str
    age: int

    def __init__(self, _first_name, last_name, age):
        '''Sets all values'''
        self._first_name = _first_name
        self.last_name = last_name
        self.age = age

    def setAge(self):
        '''increases age by 1'''
        self.age += 1
    
    def full(self):
        '''gets full name'''
        return self._first_name + " " + self.last_name
    
    def __str__(self):
        return f"Name: {self._first_name} {self.last_name} Age: {self.age}"
    

tia = Person("Tia", "Larose", 28)
alex = Person("Alex", "LaRose", 37)
tia.setAge()

print(f"{tia.full()} Age: {tia.age}")
print(f"{alex.full()} Age: {alex.age}")
print(tia)

'''
What is a class?
    A class is a zoomed out version of what the class represents
What is an object?
    An instance of a class
How is a class a form of encapsulation? 
    contains methods
How is a class an abstraction of an object?
    Tia and Alex are persons so Person is an abstraction of Tia and Alex
How do you access information in an object?
    object.wantedinfo
How do you initialize a class?
    alex = Person("Alex", "LaRose", 37)
How do you set a default value 
    set it in the parameters
How do you use type hinting?
    variable: dataType
    def function() -> dataType:
How do you set an attribute to be private?
    add an _ before the item, it is the equivalent it is the equivelent of letting other pepole know its private
How do you make a class method?
    class blah:
        def method:
            blah
Why do we include docstrings/
    docstrings are just multline comments that includes key attributes and methods that exist within the calss
What does "self" do as a parameter for class methods?
    self goes into the objecta and takes the specific variables in the instance
What are getter and setter methods?
    Setters change the value and getters display values
What are magic methods?
    There is a list of magic methods and they all include __ at the beggining and __ the end
Where are class objects saved? (heap or stack?)
    heap
'''