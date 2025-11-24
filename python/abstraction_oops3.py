from abc import ABC, abstractmethod
class Operation(ABC):
    @abstractmethod
    def add(self, a, b):
        pass
    @abstractmethod
    def multiply(self, a, b):
        pass   
class Addition(Operation):
    def add(self, a, b):
        return a + b
    def multiply(self, a, b):
        pass
class Multiplication(Operation):
    def add(self, a, b):
        pass
    def multiply(self, a, b):
        return a * b    
a = Addition()
m = Multiplication()    
print("Addition of 5 and 3:", a.add(5, 3))
print("Multiplication of 5 and 3:", m.multiply(5, 3))