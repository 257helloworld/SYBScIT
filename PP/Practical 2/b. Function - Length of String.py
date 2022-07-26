# Write a function that computes the length of a given list or string
def count(s):
    len = 0
    for c in s:
        len += 1
    return len
str = input("Enter a string: ")
print("Length of the string: ",count(str))