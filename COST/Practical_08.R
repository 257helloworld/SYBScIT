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
df = n - 1
ttab = qt(1-alpha/2,df)
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
df = n - 1
ttab = qt(1-alpha/2,df)
print(ttab)
if(abs(tcal) < ttab) {
    print("Accept HO")
    print("Mean lifetime of the bulb has not decreased.")
} else {
    print("Reject HO")
    print("Mean lifetime of the bulb has decreased.")
}
cat("\n")

# 3. Drug manufacturer has installed a machine which automatically fills 5gms
# of drugs in each capsule. A random sample was taken & it was found out to contain
# 5.02 gms an average and SD of the sample was 0.002 gms

mu = 5
sigma = 0.002
n = 10
xbar = 5.02
alpha = 0.05
tcal = (xbar-mu) / (sigma/sqrt(n))
print(tcal)
df = n - 1
ttab = qt(1-alpha/2,df)
print(ttab)
if(abs(tcal) < ttab) {
    print("Accept HO")
    print("Adjustment in the machine is in order.")
} else {
    print("Reject HO")
    print("Adjustment in the machine is not in order.")
}
cat("\n")

# 4. 9 items of a sample at the following values are 45, 47, 50, 52, 48, 47, 49, 53 & 50.
# The mean is 49 & sum of square of deviation from mean is 52. Can the same 
# be regarded as taken from the population having 47 mean ? 
# Also obtain 95% and 99% Confidence limit of population.

# When confidence level is 95%
cat("\nWhen confidence level is 95%\n")

mu = 47
sigma = 2.549
n = 9
xbar = 49
alpha = 0.05
tcal = (xbar-mu) / (sigma/sqrt(n))
print(tcal)
df = n - 1
ttab = qt(1-alpha/2,df)
print(ttab)
if(abs(tcal) < ttab) {
    print("Accept HO")
    print("Same can be regarded as taken from the population.")
} else {
    print("Reject HO")
    print("Same can not be regarded as taken from the population.")
}

# When confidence level is 99%

cat("\nWhen confidence level is 99%\n")
mu = 47
sigma = 2.549
n = 9
xbar = 49
alpha = 0.01
tcal = (xbar-mu) / (sigma/sqrt(n))
print(tcal)
df = n - 1
ttab = qt(1-alpha/2,df)
print(ttab)
if(abs(tcal) < ttab) {
    print("Accept HO")
    print("Same can be regarded as taken from the population.")
} else {
    print("Reject HO")
    print("Same can not be regarded as taken from the population.")
}
cat("\n")


# 5. 10 File lines are taken at random from an automatic filing machine. 
# The mean weight of the tables is 15.8kg and S.D is 0.5kg. Does the sample mean
# differ significantly from the intended weight of 16kgs.

mu = 16
sigma = 0.5
n = 10
xbar = 15.8
alpha = 0.05
tcal = (xbar-mu) / (sigma/sqrt(n))
print(tcal)
df = n - 1
ttab = qt(1-alpha/2,df)
print(ttab)
if(abs(tcal) < ttab) {
    print("Accept HO")
    print("The sample mean differ significantly from the standard weight.")
} else {
    print("Reject HO")
    print("The sample mean not differ significantly from the standard weight.")
}
cat("\n")


# 6. Two hundred randomly selected adults were asked wheter T.V. shows in all are
# primarily entertaining, educational or a waste of time (only one answer could be choosen)
# The response were categorized by gender in the given table:
# | Gender | Entertaining | Educational | Waste of Time | Total |
# | Male   |      52      |      28     |       30      |  110  |
# | Female |      28      |      12     |       50      |   90  |
# | Total  |      80      |      40     |       80      |  200  | 
# Is this evidence convencing that there is a relation between gender and opinion in 
# the population interest ?

x = matrix(c(52,28,30,28,12,50), byrow = T, nrow = 2)
colnames(x) = c("Entertainment", "Education", "Waste of Time")
rownames(x) = c("Male","Female")
print(x)
xsqcal = chisq.test(x)
print(xsqcal)
exp_table = as.table(x)
summary(x)
xsqcal$exp
cat("\n\n")


# 7. A certain drug is claimed to be effective in curing colds in an experiment with
# 500 people with cold. Half of them were given the sugar pills the patients reactions
# to the treatment are recorded in the table on the basis of this data, can it be
# concluded that there is significant difference in the effect of the drug and sugar pills
# |  Treatment  | Helped | Reactions | No Effect | Total |
# |    Drugs    |  150   |     30    |     70    |  250  |
# | Sugar Pills |  130   |     40    |     80    |  250  |
# |    Total    |  280   |     70    |    150    |  500  |

x = matrix(c(150, 130, 30, 40, 70, 80), byrow = T, nrow = 2)
colnames(x) = c("Helped", "Reactions", "No Effect")
rownames(x) = c("Drugs", "Sugar Pills")
print(x)
xsqcal = chisq.test(x)
print(xsqcal)
exp_table = as.table(x)
summary(x)
xsqcal$exp
cat("\n\n")