# if ... elif ... else
c = input("Enter a character: ")
if(ord(c) >= 65 and ord(c) <= 90):
    print("Uppercase Letter")
elif(ord(c) >= 97 and ord(c) <= 122):
    print("Lowercase Letter")
elif(ord(c) >= 48 and ord(c) <= 57):
    print("Digit")
else:
    print("Special Symbol")