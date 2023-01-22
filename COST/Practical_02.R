# Matrix Operation
# Create matrix using R and perform the operation addition, multiplication, transpose and inverse

# Matrices
m1 = matrix(c(1,2,3,4,5,6,7,8,9),nrow = 3,ncol = 3,byrow = TRUE)
m2 = matrix(c(1,0,2,-4,1,3,1,0,0),nrow = 3,ncol = 3,byrow = TRUE)

# Addition of matrix
cat("\nMatrix 1:\n")
print(m1)
cat("\nMatrix 2:\n")
print(m2)
cat("\nAddition of Matrix 1 & Matrix 2:\n")
print(m1 + m2)

# Determinant
cat("\nTranspose of Matrix 1:\n")
print(t(m1))
cat("\nDeterminant of Matrix 1:\n")
cat(det(m1))

# Multiplication 
cat("\n\nMultiplication of Matrix 1 & Matrix 2:\n")
if(ncol(m1) == nrow(m2)) {
    print(m1 %*% m2)
} else {
    print("Multiplication is not possible")
}

# Inverse
cat("\n\nMatrix 3\n")
m1 = A = matrix(c(2,1,1,3,2,1,2,1,2), 3, 3)
print(m1)
d = det(m1)
if(d != 0){
    cat("\nInverse of Matrix 3:\n")
    print(solve(m1))
} else {
    print("Inverse doesn't exist")
}

cat("\n")