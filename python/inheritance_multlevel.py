class vehicle:
    def runs(self):
        print("Vehicle helps un to travel")
class car(vehicle):
    def fuel(self):
        print("Car runs on petrol or diesel")
class electric_car(car):
    def charge(self):
        print("Electric car runs on electricity")
my_car = electric_car()
my_car.runs()
my_car.fuel()
my_car.charge() 