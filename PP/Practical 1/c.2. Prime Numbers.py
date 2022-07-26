# Prime Numbers
# Write a program to accept a number from the user and check whether it is a prime number or not

n = int(input("Enter a number: "))
for d in range(2,n):
    if(n % d == 0):
        print(n, "is NOT a Prime Number.")
        break
else:
    print(n, "is a Prime Number")