def is_even(n) :
    return n % 2 == 0
numbers = [1,2,3,4,5,6,7,8,9,10]
even_numbers = tuple(filter(is_even, numbers))
print(even_numbers)
