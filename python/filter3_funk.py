scores = {"Alice": 5, "Bob": 12, "Charlie": 18, "David": 9}
passed = dict(filter(lambda x: x[1] >10, scores.items()))
print(passed)