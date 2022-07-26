# For the list a = [1,1,2,3,5,8,13,21,34,55,89]
# Write a program to print the list after removing the 0th, 2nd, 4th & 5th elements.
a = [1,1,2,3,5,8,13,21,34,55,89]
b = [5,4,2,0]
for i in b:
    del a[i]
print(a)
