# Reverse of String
# Write a program to accept string from the user and print its reverse string
def reverse(v):
    l = len(v) - 1
    rev = ""
    while l >= 0:
        rev = rev + v[l]
        l -= 1
    return rev
val = input("Enter a value: ")
print("Reverse = ", reverse(val))