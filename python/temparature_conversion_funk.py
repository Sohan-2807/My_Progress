def temp(celsius) :
    fahrenheit = celsius * 9 / 5 + 32
    return fahrenheit
x = float(input("Enter temperature in Celsius: "))
temp(x)
print("Temperature in Fahrenheit:", temp(x))

