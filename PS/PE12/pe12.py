# PE 12 - CSCI 3010 - python prep work
# Name: Chakrya Ros

# Comments in python start with a #

############################## Python Interpreter Questions ##########################
# Explore these questions in a python interpreter from the command line
# Run the python interpreter by typing "python". Make sure that you are running python version 3
# You'll see something like "Python 3.6.1 |Anaconda 4.4.0 (x86_64)| (default, May 11 2017, 13:04:09)"
# When you start the interpreter.
# If you start it and the version is not 3.x.x, try running "python3".
#
# 1. how do you declare a variable? Give an example.
#    python variable don't need explicit declaration to reserve memoery space. we just assign a value to a variable.
#    name = "Chakrya"
# 2. How do you declare a variable of type int? float? string? boolean?
#   number = 100
#   miles = 55.34
#   name = "yanit"
#   check = True;
# 3. How do you declare a variable that is an empty list? a non-empty list?
#    list = []
#
# 4. How do you find the length of a string or a list in python?
#   list = [0, 1, 2 ,3]
#   len(list)
#
# 5. How do you print to standard out?
#   print(len(list))
#   print(nmber)
#
# 6. What does whitespace (spaces, tabs) indicate in python?
#   use 4 space is the same as tab. Space and or tab constitutes indentation. It's more important to be consistent throughout the code for use space or tabs
#
#
#####################################################################################


# 1. run this file from the command line. What command did you use?
# Answer: python ./addvalue.py

# Here is a function defined in python
def add_values(val1, val2):
    added = val1 + val2
    print(added)

# 2. Write at least 3 function calls to add_values using different types as parameters
add_values(10, 30)
add_values(35.45, 76.89)
add_values(int("23"), int("67"))

def print_all_values(thing):
    for subthing in thing:
        print(subthing)


# 3. Write at least 2 function calls to print_all_values using different types as parameters
print_all_values("Hello World")
print_all_values(str(3))
print_all_values(str(3.98))
# 4. Modify the function below so that if any 2 (or 3) colors are within 10 of each other,
# it prints "Mixed!" instead.
def color_dominance(red, green, blue):
    
    if (abs(red - green) <= 10) or (abs(green - blue) <= 10) or (abs(red - blue) <= 10):
        print("Mixed!")
        return
    dominant = max(red, green, blue)
    if dominant == red:
        print("Most red!")
    elif dominant == green:
        print("Most green!")
    else:
        print("Most blue!")

# 5. Write at least 3 function calles to color_dominance here
color_dominance(6, 14, 5)
color_dominance(3, 12, 4)
color_dominance(5, 17, 1)
# 6. Write a function that returns a value, call that function, save the value in a variable, and print the value.
def return_value(value):
    return value
get_ = return_value(10)
print("return_value: ", get_)

# 7. Write a function called add_to_values that takes two parameters, a list, and a value to add to every element
def add_to_values(list, value):
    for index, list_val in enumerate(list):
        list[index] = str(list_val) + str(value)

# in the list. This function should mutate the values in the original list.
#
# Call your function at least three times, using a list of ints, a list of boolean values, and a list of strings
newlist =[1, 2, 3]
add_to_values(newlist, 10)
add_to_values(newlist, "red")
add_to_values(newlist, True)
print(newlist)


# 8. Add a distance method to the following Point object
# Do number 10 before you do number 8 and 9!
import math
class Point:

    # This is the constructor!
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def distance(self):
        dx = self.x ** 2
        dy = self.y ** 2
        return math.sqrt(dx + dy)

    # 9. When is this method called?
    # call after creating new Point class in main
    def __str__(self):
        return "(" + str(self.x) + ", " + str(self.y) + ")"

    def get_quadrant(self):
        if self.x >= 0 and self.y >= 0:
            return 1
        elif self.x < 0 and self.y >= 0:
            return 2
        elif self.x < 0 and self.y < 0:
            return 3
        else:
            return 4

# 10. Instantiate two Points more Points here, calling all methods that they have!
p1 = Point(0, 2)

p1.distance()
p1.__str__()
p1.get_quadrant()



