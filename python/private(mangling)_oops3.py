class Test:
    def __init__(self):
        self.__secrete = "Hidden Value"
obj = Test()
# print(obj.__secrete)  # This will raise an AttributeError
# Accessing the private attribute directly will raise an AttributeError
print(obj._Test__secrete)  # Accessing the private attribute using name mangling