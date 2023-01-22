# Using R import the data from Excel, CSV file and perform functions.

data <- read.csv(file.choose(),header = T)
print(data)

# To find range
range = max(x) - min(x)
cat("\nRange:", range)

# To find mean
cat("\nMean:", mean(x))

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

# To find Quartiles
cat("\nQuartile:",quantile(x))

# To find Percentiles   
cat("\n")
quantile(x,c(0.25,0.50,0.75,1))

cat("\n")