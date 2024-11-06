//Перемножить две данные числовые матрицы размера n´n.

#include <iostream>
#include <iomanip>  
#include <cstdlib>  
#include <ctime>    

using namespace std;

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void fillMatrixRandom(int matrix[][10], int n) {
    // Заполняем матрицу случайными числами от 1 до 10
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = rand() % 10 + 1;
        }
    }
}

void printMatrix(int matrix[][10], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(4) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    setlocale(LC_ALL, "Rus");

    // Ввод размера матрицы
    cout << "Введите размер матрицы (n x n): ";
    cin >> n;

    // Инициализация генератора случайных чисел
    srand(time(0));

    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];

    // Заполнение и вывод первой матрицы
    cout << "Первая матрица:\n";
    fillMatrixRandom(firstMatrix, n);
    printMatrix(firstMatrix, n);

    // Заполнение и вывод второй матрицы
    cout << "\nВторая матрица:\n";
    fillMatrixRandom(secondMatrix, n);
    printMatrix(secondMatrix, n);

    // Умножение матриц
    multiplyMatrices(firstMatrix, secondMatrix, result, n);

    // Вывод результирующей матрицы
    cout << "\nРезультирующая матрица:\n";
    printMatrix(result, n);

    return 0;
}



