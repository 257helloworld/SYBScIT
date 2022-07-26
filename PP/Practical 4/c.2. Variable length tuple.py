# Variable length tuple
def sum_num(*num):
    s = sum(num)
    print("Sum = ",s)
print("Enter 5 numbers: ")
n1,n2,n3,n4,n5 = map(int,input().split())
sum_num(n1,n2,n3,n4,n5)