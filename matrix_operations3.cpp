#include <iostream>
using namespace std;

const int SIZE = 3;  // For simplicity, using 3x3 matrices

void inputMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            cin >> matrix[i][j];
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void addMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[i][j] = a[i][j] + b[i][j];
}

void subtractMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[i][j] = a[i][j] - b[i][j];
}

void multiplyMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++)
                result[i][j] += a[i][j] * b[i][j];
        }
}

void transposeMatrix(int matrix[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[j][i] = matrix[i][j];
}

int main() {
    int a[SIZE][SIZE], b[SIZE][SIZE], result[SIZE][SIZE], choice;

    cout << "Enter elements of first matrix (3x3):" << endl;
    inputMatrix(a);
    cout << "Enter elements of second matrix (3x3):" << endl;
    inputMatrix(b);

    cout << "Choose operation: 1. Addition  2. Subtraction  3. Multiplication  4. Transpose" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            addMatrix(a, b, result);
            cout << "Resultant Matrix (Addition):" << endl;
            printMatrix(result);
            break;
        case 2:
            subtractMatrix(a, b, result);
            cout << "Resultant Matrix (Subtraction):" << endl;
            printMatrix(result);
            break;
        case 3:
            multiplyMatrix(a, b, result);
            cout << "Resultant Matrix (Multiplication):" << endl;
            printMatrix(result);
            break;
        case 4:
            transposeMatrix(a, result);
            cout << "Transpose of First Matrix:" << endl;
            printMatrix(result);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
