# checking if the year is a leap year

year = int(input("Enter a number:"))
if year % 4 == 0 and year % 100 !=0 :
    print("Leap year")
elif year % 400 == 0 :
    print("Leap year")
else :
    print("Not Leap year")

