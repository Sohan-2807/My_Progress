a = input("enter a number to check if it's a palindrome:")
# a = str(a)
a = a.lower()
if a[::] == a[::-1]:
    print(f"{a} is a palindrome")
else:
    print(f"{a} is not a palindrome")
    
