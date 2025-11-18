numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
even_numbers = tuple(filter(lambda x: x%2 == 0, numbers))
print(even_numbers)