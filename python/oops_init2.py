class person:
    def __init__(self,name,age,occupation):
        self.name = name
        self.age = age
        self.occupation = occupation
        
person1 = person("sohan",18,"SE")
person2 = person("xyz",99,"abc")

print(person1.name)
print(person1.age)
print(person1.occupation)

print(person2.name)
print(person2.age)
print(person2.occupation)

