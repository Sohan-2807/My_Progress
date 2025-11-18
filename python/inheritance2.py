# The code defines a class hierarchy with a base class "car" and a derived class "Honda" to represent
# a car with engine and model details.
class car:
    def set_engine_model(self,engine):         #setting and getting methods
        self.engine = engine
    def get_engine_model(self):
        print(self.engine)
        
class Honda(car):
    def set_car_model(self,model):
        self.model = model
    def get_car_model(self):
        print(self.model)
        
my_car = Honda()

my_car.set_engine_model("V6")
my_car.set_car_model("Hond Civic")
print("car details:")
my_car.get_engine_model()
my_car.get_car_model()
