# Write a function to check whether the given sentence is a pangram or not.
def pangram(s):
    l = len(set(s))
    if l >= 26:
        print("Sentence is a Pangram")
    else:
        print("Sentence is NOT a pangram")
sent = input("Enter a sentence: ")
pangram(sent.lower())