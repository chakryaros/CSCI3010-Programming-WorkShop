#Chakrya Ros

from functools import reduce

#Given a list of numbers and a number, find all multiples of the given number.
ls = [1 ,2 ,3 ,4, 5]
multiples_num = list(map(lambda x: x*x, ls)

#Given a list of elements, find the maximum element without using the max function
ls = [1, 3, 6 ,2 ,8, 4, 5]
reduce(lambda a, b : a if a > b else b, ls)

#Given a list of strings, create one string that is the concatenation of all unique characters in the strings, case insensitive.
ls = ["dog", "cat", "fish"]
char_ = list(reduce(lambda x, y: x + y, ls))
unique = reduce(lambda l, x: l.append(x) or l if x not in l else l, char_, [])
reduce(lambda x, y: x + y, unique)


