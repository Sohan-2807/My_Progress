class Father:
    def skills(self):
        print("cooking")
class Mother:
    def talents(self):
        print("Coding")
class Child(Father,Mother):
    def hobbies(self):
        print("playing")
        
c = Child()
c.skills()
c.talents()
c.hobbies()


        