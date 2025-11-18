def number(x) :
    if x > 0 :
        return "positive"
    else : 
        return "negative"
a = int(input("enter any number to check +ve or -ve:"))
print(f"{a} is {number(a)}")