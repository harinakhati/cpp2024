/*Write a program in C++ to read two matrices of size m*n from the keyboard and then find sum and product of these two matrices.
 Use function to read, to find sum and to find product.*/
 #include<iostream>
using namespace std;
void readMatrix(int matrix[][10], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}
void printMatrix(int matrix[][10], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void addMatrices(int matrix1[][10], int matrix2[][10], int sum[][10], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void multiplyMatrices(int matrix1[][10], int matrix2[][10], int product[][10], int m, int n, int p) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            product[i][j] = 0;
            for(int k = 0; k < n; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
int main() {
    int m, n, p;
    cout << "Enter number of rows for matrix 1: ";
    cin >> m;
    cout << "Enter number of columns for matrix 1: ";
    cin >> n;
    cout << "Enter number of columns for matrix 2: ";
    cin >> p;
    int matrix1[10][10], matrix2[10][10], sum[10][10], product[10][10];
    cout << "Enter elements of matrix 1: " << endl;
    readMatrix(matrix1, m, n);
    cout << "Enter elements of matrix 2: " << endl;
    readMatrix(matrix2, n, p);
    cout << "Matrix 1: " << endl;
    printMatrix(matrix1, m, n);
    cout << "Matrix 2: " << endl;
    printMatrix(matrix2, n, p);
       addMatrices(matrix1, matrix2, sum, m, n);
    cout << "Sum of matrices: " << endl;
    printMatrix(sum, m, n);
        multiplyMatrices(matrix1, matrix2, product, m, n, p);
    cout << "Product of matrices: " << endl;
    printMatrix(product, m, p);
        return 0;
        
}