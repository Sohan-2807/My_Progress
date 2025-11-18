fruits = ["apple", "banana", "cherry", "date","kiwi"]
new_fruits = list(filter(lambda fruit: len(fruit) > 5,fruits))
print(new_fruits)
# Output: ['banana', 'cherry']