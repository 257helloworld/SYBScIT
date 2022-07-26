# Fibonacci Series
n = int(input("Enter a number: "))
a, b, s = 0, 1, 0
x = 1
print(a, b, end = " ")
while(x <= (n - 2)):
    s = a + b
    a, b = b, s
    x += 1
    print(s, end = " ")