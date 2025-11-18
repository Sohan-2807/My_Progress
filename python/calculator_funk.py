def number(x,y,operation):
    if operation == "+" :
        return x + y
    elif operation == "-" :
        return x - y
    elif operation == "*" :
        return x * y
    elif operation == "/" :
        return x / y
    elif operation == "%" :
        return x % y
    elif operation == "//" :
        return x // y
    else :
        return "Invalid operation"
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
op = input("enter operation + or - or * or / or : or % or // : ")
print(f"The result is: {number(a,b,op)}")