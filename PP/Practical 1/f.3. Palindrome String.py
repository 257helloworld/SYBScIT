# Palindrome String
# Function to check palindrome string
def palin(v):
    l = len(v) - 1
    rev = ""
    while l >= 0:
        rev = rev + v[l]
        l -= 1
    if(rev == v):
        print(v, "is Palindrome")
    else:
        print(v, "is NOT Palindrome")
val = input("Enter a value: ")
palin(val)