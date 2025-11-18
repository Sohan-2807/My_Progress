'''Write a Python program to check whether a 
string contains all letters of the alphabet?'''

string = "abcdefghijklmnopqrstuvwxyz"
alphabet = "abcdefghijklmnopqrstuvwxyz"
if all(ch in string for ch in alphabet):
    print("All are present")
else :
    print("All are not present")

