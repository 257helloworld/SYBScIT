# Perform the Chi-Square test
# 1. The mean lifetime of electric light bulbs produced by a company has in the past
# been 1120. Write a standard deviation of 125h. A sample of 8 electric bulbs recently
# chosen from supply of newly produced bulb showed a mean lifetime of 1030h. 
# Test the hypothesis that the mean lifetime of the has decreased at 0.05 significne level

# student t - test left tailed problem
# HO: mu = 1120 vs H1: mu < 1120
cat("\n")
mu = 1120
sigma = 125
n = 8
xbar = 1030
alpha = 0.05
tcal = (xbar-mu) / (sigma/sqrt(n-1))
print(tcal)
def = n - 1
ttab = qt(1-alpha,def)
print(ttab)
if(abs(tcal) < ttab) {
    print("Accept HO")
    print("Mean lifetime of the bulb has not decreased.")
} else {
    print("Reject HO")
    print("Mean lifetime of the bulb has decreased.")
}
cat("\n\n")
# 2. The mean lifetime of electric light bulbs produced by a company has in the past
# been 1120. Write a standard deviation of 125h. A sample of 8 electric bulbs recently
# chosen from supply of newly produced bulb showed a mean lifetime of 1030h. 
# Test the hypothesis that the mean lifetime of the has decreased at 0.05 significne level

mu = 1120
sigma = 125
n = 8
xbar = 1030
alpha = 0.05
tcal = (xbar-mu) / (sigma/sqrt(n-1))
print(tcal)
def = n - 1
ttab = qt(1-alpha,def)
print(ttab)
if(abs(tcal) < ttab) {
    print("Accept HO")
    print("Mean lifetime of the bulb has not decreased.")
} else {
    print("Reject HO")
    print("Mean lifetime of the bulb has decreased.")
}
cat("\n")