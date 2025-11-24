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

c = Circle(5)
# s = Shape(5)  # This will raise an error
print("Area of Circle:", c.area())
# s.area()  # This will also raise an error since Shape is abstract
# print("area of circle:", s.area())  removing this line as it tries to instantiate an abstract class