class Parent():
    def __init__(self):
        self.__secrete = "Parent Hidden Value"
        
    def __private_method(self):
        return "This is a private method in Parent class"
    
    def show(self):
        print(self.__secrete)
        
class Child(Parent):
    def access_parent_private(self):
        print(obj._Parent__secrete)  # Accessing parent's private attribute using name mangling
        print(obj._Parent__private_method())  # Accessing parent's private method using name mangling
obj = Child()
obj.show()
obj.access_parent_private()


