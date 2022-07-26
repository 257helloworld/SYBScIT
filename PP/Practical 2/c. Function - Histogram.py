# Define a function histogram() that takes a list of integers and prints a histogram on the screen
def histogram(n):
    for i in n:
        print("* " * i)
r = int(input("Enter no. of rows in histogram: "))
num = []
for i in range(r):
    num.append(int(input("Enter value for row {}: ".format(i+1))))
histogram(num)