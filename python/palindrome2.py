num = int(input("Enter a number to check palindrome:"))
rev_num = 0
original_num = num

if num < 0:
    num = -num
elif num == 0:
    print("0 is a palindrome")
    
while num > 0:
    digit = num % 10
    rev_num = rev_num * 10 + digit
    num = num // 10 
    
if original_num == rev_num :
    print(f"{original_num} is a palindrome")
else :
    print(f"{original_num} is not a palindrome")
    