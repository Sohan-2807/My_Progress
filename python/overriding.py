class Parent:
    def greet(self):
        print("Hello from Parent")
class child(Parent):
    def greet(self):
        print("Hello from Child")
p = Parent()
c = child()
p.greet()
c.greet()