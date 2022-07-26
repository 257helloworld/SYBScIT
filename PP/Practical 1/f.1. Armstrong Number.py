# Armstrong Number
# Function to check for Armstrong number
from tkinter import N


def armstrong(n):
    s = 0
    temp = n 
    p = len(str(n))
    while(temp != 0):
        digit = temp % 10
        s += digit ** p
        temp //= 10
    if(s == n):
        print(n,"is Armstrong number")
    else:
        print(n,"is NOT Armstrong number")
num = int(input("Enter a number: "))
armstrong(num)