from abc import ABC, abstractmethod
class Shape(ABC):
    @abstractmethod
    def area(self):
        pass
    print("this message from abstract method")
    print("Area formula is different for different shapes")
class Circle(Shape):
    def __init__(self,radius):
        self.radius=radius
        
    def area(self):
        return 3.14*self.radius*self.radius
class Rectangle(Shape):
    def __init__(self,length,breadth):
        self.length=length
        self.breadth=breadth
        
    def area(self):
        return self.length*self.breadth
c = Circle(5)
r = Rectangle(4,6)
print("Area of Circle:", c.area())
print("Area of Rectangle:", r.area())
    