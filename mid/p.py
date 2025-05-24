# ✅ Q1: Short Programming Questions (2.5 × 8 = 20)

# (a) Print prime numbers up to a given number
num = int(input("Enter a number: "))
print("Prime numbers:")
for i in range(2, num + 1):
    for j in range(2, i):
        if i % j == 0:
            break
    else:
        print(i, end=" ")

# (b) Count digits and letters in a string
s = input("Enter a string: ")
digits = sum(c.isdigit() for c in s)
letters = sum(c.isalpha() for c in s)
print("Digits:", digits)
print("Letters:", letters)


# (c) Check if 'open' is present in the string
text = "This is open source software"
if 'open' in text:
    print("Word 'open' is present")
else:
    print("Not found")


# (d) Display distinct numbers from input
nums = input("Enter numbers: ").split()
unique_nums = set(nums)
print("Distinct numbers:", ' '.join(unique_nums))

# (e) Factorial function
def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n-1)

num = int(input("Enter a number: "))
print("Factorial:", factorial(num))

# (f) Handle index out of range
lst = [1, 2, 3]
try:
    print(lst[5])
except IndexError:
    print("Index out of range")

# (g) Sort numpy array in descending order
import numpy as np
arr = np.array([4, 1, 3, 2])
print("Sorted descending:", np.sort(arr)[::-1])

# (h) Regex check for string ending with "World!"
import re
text = "Hello World!"
if re.search(r"World!$", text):
    print("Match Found!")
else:
    print("Match not found")

# ✅ UNIT I

# Q2.a) Difference between break and continue
for i in range(5):
    if i == 2:
        break  # exits loop
    print(i, end=' ')
print("\n--")
for i in range(5):
    if i == 2:
        continue  # skips current iteration
    print(i, end=' ')

# Q2.b) Prime numbers between two numbers
a = int(input("Enter start number: "))
b = int(input("Enter end number: "))
for n in range(a, b+1):
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            break
    else:
        if n > 1:
            print(n, end=' ')

# Q3.a) Print series 53, 53, 40, 40, 27, 27
for i in range(53, 0, -13):
    print(i, i, end=' ')

# Q3.b) Pyramid pattern
rows = 5
for i in range(rows):
    print(" " * (rows-i-1) + "* " * (i+1))

# ✅ UNIT II

# Q4.a) Lists vs Dictionary
# List: ordered, indexed
# Dictionary: unordered, key-value pairs
lst = [1, 2, 3]
dct = {"one": 1, "two": 2}

# Q4.b) Merge dictionaries
d1 = {"a": 1, "b": 2}
d2 = {"c": 3, "d": 4}
d1.update(d2)
print(d1)

# Q5.a) Tuple immutability
t = (1, 2, 3)
# t[0] = 10  # TypeError: 'tuple' object does not support item assignment

# Q5.b) Max and min of tuple
t = (4, 1, 8, 3)
print("Max:", max(t), "Min:", min(t))

# ✅ UNIT III

# Q6.a) Scope of variables
def func():
    local_var = 10
    print("Local:", local_var)

global_var = 20
func()
print("Global:", global_var)

# Q6.b) Reverse a string
s = "hello"
print("Reversed:", s[::-1])

# Q7.a) Pangram check
def is_pangram(s):
    return set("abcdefghijklmnopqrstuvwxyz").issubset(set(s.lower()))

print(is_pangram("The quick brown fox jumps over the lazy dog"))

# Q7.b) Sum of list elements
def sum_list(lst):
    return sum(lst)

print(sum_list([1, 2, 3, 4]))

# ✅ UNIT IV

# Q8.a) Class vs instance attributes
class MyClass:
    class_attr = "I am a class attribute"

    def __init__(self):
        self.instance_attr = "I am an instance attribute"

obj = MyClass()
print(MyClass.class_attr)
print(obj.instance_attr)

# Q8.b) Inheritance example
class Animal:
    def sound(self):
        print("Some sound")

class Dog(Animal):
    def sound(self):
        print("Bark")

pet = Dog()
pet.sound()

# Q9) Pie chart of programming language popularity
import matplotlib.pyplot as plt
languages = ["Java", "Python", "PHP", "JavaScript", "C#", "C++"]
popularity = [22.7, 17.6, 8.8, 8, 7.7, 6.7]
plt.pie(popularity, labels=languages, autopct='%1.1f%%')
plt.title("Popularity of Programming Languages")
plt.show()












