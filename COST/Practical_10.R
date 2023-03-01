my_data = mtcars
head(my_data,6)
library("ggpubr")
ggscatter(my_data,x = "mpg", y = "wt", add = "reg.line", conf.int = TRUE, cor.coef = TRUE,
          cor.method = "Pearson",xlab = "Miles/(US) gallon", ylab = "Weight(1000 lbs)")
res = cor.test(my_data$wt,my_data$mpg,method = "pearson")
print(res)