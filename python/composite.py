registration_number = int(input("Enter your registration number: "))
is_composite = False
# Check if the registration number is composite
if  registration_number <= 3:
	print("Sorry, this competition is for students with composite registration numbers only.")
else:
	for i in range(2, int(registration_number ** 0.5) + 1):
		if registration_number % i == 0:
			is_composite = True
			break
	if is_composite:
		print("You are eligible for the advanced math challenge!")
	else:
		print("Sorry, this competition is for students with composite registration numbers only.")
