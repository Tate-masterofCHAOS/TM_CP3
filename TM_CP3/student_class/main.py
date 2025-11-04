



class Student:
    def __init__(self, student_id, name, grade):
        self.student_id = student_id
        self.name = name
        self.grade = grade

    def get_grade(self):
        return f"{self.name}s grade is {self.grade}"
    
    def set_grade(self, new_grade):
        self.grade = new_grade

    def __str__(self):
        return f"Student ID: {self.student_id}, Name: {self.name}, Grade: {self.grade}"

def main():
    student1 = Student(1, "Alice", 85)
    student2 = Student(2, "Bob", 90)
    student3 = Student(3, "Charlie", 78)
    student4 = Student(4, "Diana", 92)
    student5 = Student(5, "Ethan", 88)

    print(student1)
    print(student2)
    print(student3)
    print(student4)
    print(student5)

    student1.set_grade(95)
    student2.set_grade(93)
    student3.set_grade(80)

    print(student1.get_grade())
    print(student2.get_grade())
    print(student3.get_grade())



main()