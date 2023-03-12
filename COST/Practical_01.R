# Basics of R
# Using R, execute basic commands array, list and frames.

x = c(9,20,21,25,30,50)
y = c(3,5,6,7,8,9)

cat("Value of x: ", x)
cat("\nValue of y: ", y)

# Arithmetic Operators
cat("\n\nArithmetic Operators: ")
cat("\nAddition (x + y): ", x + y)
cat("\nMultiplication (x * y): ", x * y)
cat("\nDivision (x % y): ", x %/% y)
cat("\nMod (x % y): ", x %% y)

# Comparison Operators
cat("\n\nComparison Operators")
cat("\nIs x > y ?:  ", x > y)
cat("\nIs x = y ?:  ", x == y)
cat("\nIs x != y ?: ", x != y)

cat("\n\nLogical Operators")
cat("\nAND: ", x & y)
cat("\nOR:  ", x | y)
# cat("\n", x && y)
# cat("\n", x || y)

# in Operator
cat("\n\nin Operator")
a = 4:10
cat("\nValue of a: ", a)
b = 5
c = -6
cat("\n 5 in a ?: ", b %in% a)
cat("\n-6 in a ?: ", c %in% a)

# Sequence
cat("\n\nSequence")
s1 = seq(0,50,5)
cat("\nValue of t: ", s1)

# List
cat("\n\nList")
l1 = list("this","that","there")
l2 = list(1,2,3)
cat("\nList 1 (2nd element): ")
print(l1[2])
# Converting List to vector
v1 = unlist(l1)
cat("List 1 to vector: ", v1)

# Matrices
cat("\n\nMatrices\n")
m1 = matrix(c(1,2,3,4,5,6),nrow=2,ncol=3,byrow = FALSE)
print(m1)

# Arrays
cat("\n\nArrays\n")
d1 = c(1,2,3)
d2 = c(10,11,12,13,14,15)
column.names = c("c1","c2","c3")
row.names = c("r1","r2","r3")
matrix.names = c("Matrix_1","Matrix_2")
a1 = array(c(d1,d2),dim = c(3,3,2),dimnames = list(row.names,column.names,matrix.names))
print(a1)
# Print the element the third row of the second matrix
print(a1[3,,2])
print(a1[2,1,])

cat("\n")
