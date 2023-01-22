# Using R import the data from excel/csv file and calculate the standard deviatoin variance, co-variance

data <- read.csv(file.choose(),header = T)
print(data)

cat("\nVar(x):",var(x))
cat("\nVar(y):",var(y))
cat("\nSD(x):",sd(x))
cat("\nSD(y):",sd(y))

cat("\n\n")