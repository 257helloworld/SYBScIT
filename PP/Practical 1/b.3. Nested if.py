# Nested if

# Accept area code as C for city and V for Village and amount of sales. If any other area code is entered display the message "Invalid Area Code". Display the commission
# If Area is City: 
#     if: sales >= 1,00,000 then commission = 10% on sales
#     else if: sales >= 50,000 then commission = 5% on sales
#     else: commission = 1,000
# If Area is Village: 
#     if: sales >= 1,00,000 then commission = 15% on sales
#     else if: sales >= 50,000 then commission = 8% on sales
#     else: commission = 1,500

a = input("Enter Area Code: ")
s = int(input("Enter sales: "))
if(a == "C" or a == "c"):
    if(s >= 100000):
        c = s * 0.10
    elif(s >= 50000):
        c = s * 0.05
    else:
        c = 1000
    print("Commission =", c)
elif(a == "V" or a == "v"):
    if(s >= 100000):
        c = s * 0.15
    elif(s >= 50000):
        c = s * 0.08
    else:
        c = 1500
    print("Commission =", c)
else:
    print("Invalid Area Code")