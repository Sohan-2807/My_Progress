class Vehicle:
    def __init__(self,brand,color,year,manufactured):
        self.brand = brand
        self.color = color
        self.year = year
        self.manufactured = manufactured
class car(Vehicle):
    def __init__(self,brand,color,year,manufactured,model,owner):
        super().__init__(brand,color,year,manufactured)
        self.model = model
        self.owner = owner
    def display(self):
        print(f"car Brand:{self.brand}, model:{self.model},color:{self.color}, year:{self.year}, Manufactured:{self.manufactured}, owner:{self.owner}")
        
c = car("BMW","Black",2020,"Germany","X5","Sohan")
c.display()
