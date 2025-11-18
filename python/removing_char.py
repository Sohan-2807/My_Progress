n = int(input("enter a nth digit to remove it from string:"))
string = "Hello,world"
a = 0
while a < len(string):
    if a == n :
        a += 1
        continue
    print(string[a])
    a += 1
    '''
n = int(input("Enter the index of the character to remove from the string: "))
string = "Hello,world"
for i in range(len(string)):
    if i != n:
        print(string[i])'''
        
        
'''Write a Python program to remove the nth index character from a nonempty string?'''
    