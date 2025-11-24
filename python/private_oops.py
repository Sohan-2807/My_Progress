class Car:
    def __init__(self):
        self.__engine_number = "12345XYZ"
    def show_engine_number(self):
        return self.__engine_number
car = Car()
car.show_engine_number()
print(car.show_engine_number()) # Accessing the private attribute via a public method
print(car.__engine_number) # This will raise an AttributeError