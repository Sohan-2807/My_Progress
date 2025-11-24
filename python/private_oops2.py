class BankAccount():
    def __init__(self,balance):
        self.__balance = balance
    
    def __secrete_method(self):
        print("this is private message")
    
    def show_balance(self):
        return self.__balance
    
acc = BankAccount(1000)
print(acc.show_balance())  # Accessing the private attribute via a public method
# acc.__secrete_method()  # This will raise an AttributeError 
# print(acc.__balance)  # This will raise an AttributeError init__(self, balance):


