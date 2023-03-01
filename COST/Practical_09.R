# Linear Regression

# 9A - Write a R code to find the relationship model between the predictor and the 
# response variable.
# Below is the sample data representing the observation of height and corresponding weights

# Values of height
# 151, 174, 138, 186, 128, 136, 79, 163, 152, 131
# Values of weight
# 63, 81, 56, 91, 47, 57, 76, 72, 62, 48

cat("\nPractical 9A\n")
x = c(151, 174, 138, 186, 128, 136, 179, 163, 152, 131)
y = c(63, 81, 56, 91, 47, 57, 76, 72, 62, 48)
relation = lm(y~x)
print(relation)

print(summary(relation))

a = data.frame(x=170)
result = predict(relation,a)
print(result)
png(file = "LinearRegression.png")
plot(y,x, col = "blue", main = "Height & Weight Regression", abline(lm(x~y)),cex = 1.3, pch=16, xlab = "Weight in Kg", ylab = "Height in Cm")
dev.off()


# 9B - Write R code for Non-Linear Regression.
cat("\n\nPractical 9B\n")
xvalues = c(1.6, 2.1, 2, 2.23, 3.71, 3.25, 3.4, 3.86, 1.19, 2.21)
yvalues = c(5.19, 7.43, 6.94, 8.11, 18.75, 14.88, 16.06, 19.12, 3.21, 7.58)
png(file = "Non-LinearRegression.png")
plot(xvalues, yvalues)
model = nls(yvalues~b1*xvalues^2+b2, start = list(b1 = 1, b2 = 3))
new.data = data.frame(xvalues = seq(min(xvalues),max(xvalues), len= 100))
lines(new.data$xvalues, predict(model, newdata = new.data))
print(sum(resid(model)^2))
print(confint(model))
cat("\n")
