# Write a function that takes 1 character as input and returns True if it is Vowel else returns False
def vowel(c):
    return (c.lower() in ['a','e','i','o','u'])
c = input("Enter a character: ")
if vowel(c):
    print("Vowel")
else:
    print("Consonant")