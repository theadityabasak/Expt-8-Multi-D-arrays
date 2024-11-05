# 2-d arrays
# Appused: VS Code
# THeory
2D arrays are useful for matrix operations. They need two loops for executing rows and columns.A 2D array in C++ is essentially an array of arrays. It can be visualized as a table with rows and columns. Each element in a 2D array can be accessed using two indices: the row index and the column index. The general form for declaring a 2D array is: dataType arrayName[rowSize][columnSize]; Where dataType is the type of data (e.g., int, float), arrayName is the name of the array, rowSize is the number of rows, and columnSize is the number of columns.

## Declaration & initialization
Declaration int matrix[3][4]; // A 2D array with 3 rows and 4 columns Initialization You can initialize a 2D array in several ways:

Static Initialization: int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
Dynamic Initialization: int rows = 2, cols = 3; int matrix[2][3] = {0}; // Initializes all elements to 0

## Dsiplay
To display a 2D array, you can use nested loops to iterate through the rows and columns: for (int i = 0; i < 2; i++) { for (int j = 0; j < 3; j++) { std::cout << matrix[i][j] << " "; } std::cout << std::endl; }

# Algorithms
## Expt 8a
Start

Input:

Read the number of rows (r) from the user.
Read the number of columns (c) from the user.

Array Declaration:
Declare a 2D array arr with r rows and c columns.

Input Array Elements:
For each row index i from 0 to r-1:
For each column index j from 0 to c-1:

Prompt the user to enter the element for position (i+1, j+1).

Read the element value and store it in arr[i][j].

Display Array Elements:
For each row index i from 0 to r-1:
For each column index j from 0 to c-1:

Print the element arr[i][j] followed by a space

Print a newline after each row is completed to separate rows.

End

## Experiment 8b 
Read number of rows r1 for the first matrix.
Read number of columns c1 for the first matrix.
Read number of rows r2 for the second matrix.
Read number of columns c2 for the second matrix. 3.Check Compatibility:
If r1 is equal to r2 and c1 is equal to c2:
Proceed to matrix addition. Else:
Display message: "Number of rows or columns do not match for matrix addition."
End 4.Declare Matrices:
Declare matrix a of size r1 x c1.
Declare matrix b of size r2 x c2.
Declare matrix c of size r1 x c1.
Input Matrix Elements: 5.For each element in matrix a:
Prompt user to enter the element.
Read and store the value in a[i][j].
For each element in matrix b:
Prompt user to enter the element.
Read and store the value in b[i][j]. 6.Add Matrices:
for each element c[i][j]:
Compute c[i][j] = a[i][j] + b[i][j].
Display Result:
Display message: "The resultant matrix after addition is:"
For each element in matrix c:
Print c[i][j] followed by a space.
Print a newline character after each row. 7.End Program
To multiply two matrices and display the resultant matrix, ensuring that the dimensions of the matrices are compatible for multiplication.
1.Start 2.Read Matrix Dimensions:

Display: "Enter the number of rows of the first matrix:"
Read r1 (rows of the first matrix).
Display: "Enter the number of columns of the first matrix:"
Read c1 (columns of the first matrix).
Display: "Enter the number of rows of the second matrix:"
Read r2 (rows of the second matrix).
Display: "Enter the number of columns of the second matrix:"
Read c2 (columns of the second matrix). 3.Check Matrix Multiplication Feasibility:
If c1 is not equal to r2:
Display: "Matrix multiplication is not possible."
End 4.Declare Matrices:
Declare matrix A of size r1 x c1.
Declare matrix B of size r2 x c2.
Declare matrix C of size r1 x c2 and initialize all elements to 0. 5.Input Matrix A:
Display: "Enter elements of the first matrix:"
For each element in A, read and store the value.
Input Matrix B:
Display: "Enter elements of the second matrix:"
For each element in B, read and store the value. 6.Multiply Matrices:
For each element C[i][j] in the resultant matrix:
Compute the sum of A[i][k] * B[k][j] for k from 0 to c1-1. 7.Display Result:
Display: "The resultant matrix is:"
Print each element of C. 8.End Program

# conclusuion
We learnt the use of 2D arrays in C++


