class Vehicle:
    def __init__(self,brand,color):
        self.brand = brand
        self.color = color
        print("Vehicle initialized")
class car(Vehicle):
    def __init__(self, brand, color,model):
       super().__init__(brand, color)
       self.model = model
       print("Car initialized")

my_car = car("BMW","Black","M3")
print(my_car.brand)
print(my_car.model)
print(my_car.color)