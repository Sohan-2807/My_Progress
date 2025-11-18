x = int(input("x:"))
n = int(input("n:")) 

sum = 0 
# for i in range (n + 1) :
#     if i % 2 == 0 :
        # sum += i * x      #for loop
# print(sum)

i = 2
while i <= n :
    i += 2
sum += i * x                #while loop
print(sum)