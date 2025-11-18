class calculator:
    def __init__(self,a,b):
        self.a = a
        self.b = b
        
    def add(self):
        return self.a + self.b
    
    def multiply(self):
        return self.a * self.b
    
calc = calculator(2,3)

print("addition: ",calc.add())
print("multiplication: ",calc.multiply())
