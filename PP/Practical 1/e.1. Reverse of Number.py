# Reverse of Number
# Write a program to accept a number from the user and print its reverse number.
def reverse(n):
    rev = 0
    while(n != 0):
        rev = (rev * 10) + (n % 10)
        n //= 10
    return rev
num = int(input("Enter a number: "))
temp = num
print("Reverse of",temp, "is", reverse(num))