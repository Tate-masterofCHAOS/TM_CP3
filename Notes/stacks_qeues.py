#TM CP3 Stacks and Qeues Notes



class Stack:
    def __init__(self):
        self.stack = []

    def is_empty(self):
        return len(self.stack) == 0

    def push(self, item):
        self.stack.append(item)

    def pop(self):
        if not self.is_empty():
            return self.stack.pop()
        else:
            return None

    def peek(self):
        if not self.is_empty():
            return self.stack[-1]

    def size(self):
        return len(self.stack)
    
class Queue:
    def __init__(self):
        self.queue = []

    def is_empty(self):
        return len(self.queue) == 0

    def enqueu(self, item):
        self.queue.append(item)

    def dequeue(self):
        if not self.is_empty():
            return self.queue.pop[0]
        else:
            return None

    def peek(self):
        if not self.is_empty():
            return self.queue[0]

    def size(self):
        return len(self.queue)



'''
What is time complexity in programming?
    How many equations have to run/ how long will it take
What are the levels of time complexity?
    The O(1) O(n) O(n log(n)) O(n squared)
What is a stack?
    A stack of things in a program you can only access from the top
What does LIFO stand for?
    Last
    In
    First
    Out
What are the things that a stack can do?
    Check if empty
    Push
    Pop
    Peek
    Check Size
How are stacks normally written in python?
    class Stack:
        def __init__(self):
            self.stack = []

        def is_empty(self):
            return len(self.stack) == 0

        def push(self, item):
            self.stack.append(item)

        def pop(self):
            if not self.is_empty():
                self.stack.pop()
            else:
                return None

        def peek(self):
            if not self.is_empty():
                return self.stack[-1]

        def size(self):
            return len(self.stack)
What is a queue?
    A stack of things in which you dd to the top and remove from the bottom
How are queues different from stacks?
    it removes from the bottom
'''