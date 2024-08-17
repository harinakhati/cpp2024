//Write a program in C++ to find product of two 3*3 matrices
#include<iostream>
using namespace std;

void multiplyMatrices(int mat1[3][3], int mat2[3][3], int prod[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            prod[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[3][3], mat2[3][3], res[3][3];

    cout << "Enter elements of first matrix:";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of second matrix:";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat2[i][j];
        }
    }

    multiplyMatrices(mat1, mat2, res);

    cout << "Matrix 1:";
    printMatrix(mat1);

    cout << "Matrix 2:";
    printMatrix(mat2);

    cout << "Product of two matrices:";
    printMatrix(res);

    return 0;
}
