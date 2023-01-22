# Using R Execute the Statistical functions: Mean, Median, Mode, Quartile Range, Inter Quartile Range, Historgram.

# To find Range
x = c(12,18,33,47,54,66,55,75,44,42,44,50)
cat("x:",x)
cat("Range:",(max(x)-min(x)))

# To find mean
cat("\nMean:",mean(x))

# To find median
cat("\nMedian:",median(x))

# To find mode
getmode <- function(x) {
    u <- unique(x)
    tab <- tabulate(match(x,u))
    u[tab == max(tab)]
}
mode <- getmode(x)
cat("\nMode:",mode)

# To find InterQuartile Range
cat("\nInterQuartile Range:", IQR(x))

# Mean of all types and Median
# 1. Create a vector
x = c(11,13,15,17,19,21,23,25,27,29)
Result.mean = mean(x)
cat("\n\nMean: ",Result.mean)

# 2. applying trim option
cat("\n\nTrim Option\n")
Result.mean - mean(x,trim = 0.3)
cat("Mean:",Result.mean)

# Applying NA option
cat("\n\nApplying NA option")
x = c(11,13,15,17,19,21,23,25,27,29,NA)
Result.mean = mean(x)
cat("\nMean:",Result.mean)

cat("\n")