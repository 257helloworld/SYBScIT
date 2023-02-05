# Perform the hypothetical testing
# 1. The mean breaking strength of cables produced by a manufacturer have a mean of #
# 1800 lb and a standard deviation of 1001 h. A sample of 50 cables is tested and
# it is found that the mean breaking strength is 1780 lb. Test the hypothesis that 
# the mean breaking strength of the cables has decreased at 0.05 significance level.

# Left tail problem
# HO: mu = 1800 vs H: mv < 1800
cat("\n")
mu = 1800
sigma = 100
n = 50
xbar = 1780
alpha = 0.05
zcal = (xbar-mu) / (sigma/sqrt(n))
print(zcal)
ztab = qnorm(1-alpha)
print(ztab)
if(abs(zcal) < ztab) {
    print("Accept HO")
    print("Breaking strength can't be increased")
} else {
    print("Reject HO")
    print("Breaking strength can be increased")
}
cat("\n\n")

# 2. The mean breaking strength of cables produced by a manufacturer have a mean of 
# 1800 lb and a standard deviation of 1001 h. A sample of 50 cables is tested and
# it is found that the mean breaking strength is 1850 lb. Test the hypothesis that 
# the mean breaking strength of the cables has decreased at 0.05 significance level.

# Left tail problem
# HO: mu = 1800 vs H: mv < 1800
mu = 1800
sigma = 100
n = 50
xbar = 1850
alpha = 0.05
zcal = (xbar-mu) / (sigma/sqrt(n))
print(zcal)
ztab = qnorm(1-alpha)
print(ztab)
if(abs(zcal) < ztab) {
    print("Accept HO")
    print("Breaking strength can't be increased")
} else {
    print("Reject HO")
    print("Breaking strength can be increased")
}
cat("\n")