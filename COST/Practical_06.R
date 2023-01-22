# Using R import the data from excel/csv file and draw skewness.

x <- c(11,13,15,17,19,21,23,25,27,29,5)
library(moments)
cat("Skewness:",skewness(x))
cat("\nKurtosis:",kurtosis(x))

y <- c(11,13,15,17,19,21,23,25,27,29)
cat("\n\nSkewness:",skewness(y))
cat("\nKurtosis:",kurtosis(y))

z <- c(11,13,15,17,19,21,23,25,27,29,15)
cat("\n\nSkewness:",skewness(z))
cat("\nKurtosis:",kurtosis(z))

cat("\n\n")