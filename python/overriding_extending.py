class Login:
    def authenticate(self):
        print("Checking username & password")     #print statement added
class Securelogin(Login):
    def authentication(self):
        super().authenticate()               #calling parent class method using super()
        print("Scanning fingerprint")       #print statement added n print both statements

user = Securelogin()
user.authentication()