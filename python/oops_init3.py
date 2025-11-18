class student:
    def __init__ (self,name,age):
        self.name = name
        self.age = age
    def display(self):
        print("name: ",self.name)
        print("age: ",self.age)
person1 = student("sohan",18)
person2 = student("abc",99)
person1.display()
person2.display()