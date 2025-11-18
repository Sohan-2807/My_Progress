a = 0
b = 1
n = int(input("n:"))
# count=0
# while count < n :
#     a,b = b,a+b
#     print(b)         #using while loop
#     count += 1
for i in range (n) :
    a,b = b,a+b        #using for loop
    print(a)