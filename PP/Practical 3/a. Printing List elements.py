# For the list a = [1,1,2,3,5,8,13,21,34,55,89]
# Write a progarm that prints out all elements of the list that are less than 5

print("\nMethod 1: ")
a = [1,1,2,3,5,13,21,34,55,89]
b = []
for n in a:
    if n < 5:
        b.append(n)
print(b)

print("\nMethod 2: ")

for n in a:
    if n < 5:
        print(n)

