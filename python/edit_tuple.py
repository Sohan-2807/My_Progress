'''adding elements in a Tuple'''
tuple01 = (1,2,3,6,7)
list01 = list(tuple01)   #converting to list
print(type(list01))
list01.append(9)         #adding elements in list
print(list01)
tuple02 = tuple(list01)  #revert into tuple again
print(tuple02)
print(type(tuple02))
