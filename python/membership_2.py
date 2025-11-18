'''Python program to check if a string has at
least one letter and one number?'''

input_str = "sohan07"
alphabet = "abcdefghijklmnopqrstuvwxyz"
numbers = "1234567890"

has_alpha = any(ch in alphabet for ch in input_str)
has_digit = any(ch in numbers for ch in input_str)

if has_alpha and has_digit:
    print("Contains at least one number and alphabet")
else:
    print("Does not contain both a number and an alphabet")


