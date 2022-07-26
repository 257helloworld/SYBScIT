# Write a function that accepts two lists and returns True if they have atleast one common element.
def compare(l1,l2):
    for i in l1:
        if(i in l2):
            return True
            break
    else:
        return False
print("Enter 5 values for list 1: ")
n1 = []
for i in range(5):
    n1.append(input())
print("Enter 5 values for list 2: ")
n2 = []
for i in range(5):
    n2.append(input())
if(compare(n1,n2)):
    print("List contains common value")
else:
    print("No comomon value in the list")