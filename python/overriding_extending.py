class Login:
    def authenticate(self):
        print("Checking username & password")
class Securelogin(Login):
    def authentication(self):
        super().authenticate()
        print("Scanning fingerprint")

user = Securelogin()
user.authentication()