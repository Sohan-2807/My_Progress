# The code defines a `House` class with a method to set the address and a `location` class that
# inherits from `House` and has a method to display the house number and street number.
class House:
    def set_address(self,house_number,street_number):
        self.house_number = house_number
        self.street_number = street_number
        
class location(House):
    def display_house_number(self):
        print("house number:",self.house_number)
        print("street number:",self.street_number)

loc = location()

loc.set_address(101,22)

loc.display_house_number
