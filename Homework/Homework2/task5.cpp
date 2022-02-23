#include <iostream>

using namespace std;

bool multipliable(int cols1, int rows2)
{
    if (cols1 == rows2)
    {
        return true;
    }
    else
        return false;
}

void inputAandB(int matrix1[][10], int matrix2[][10], int rows1, int cols1, int rows2, int cols2)
{
    int i, j;
    cout << endl
         << "Enter elements of matrix 1:" << endl;
    for (i = 0; i < rows1; ++i)
    {
        for (j = 0; j < cols1; ++j)
        {
            cout << "matrix1[" << i << "][" << j << "] = ";
            cin >> matrix1[i][j];
        }
    }

    cout << endl
         << "Enter elements of matrix 2:" << endl;
    for (i = 0; i < rows2; ++i)
    {
        for (j = 0; j < cols2; ++j)
        {
            cout << "matrix1[" << i << "][" << j << "] = ";
            cin >> matrix2[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int rows1, int cols1, int rows2, int cols2)
{
    int i, j, k;

    for (i = 0; i < rows1; ++i)
    {
        for (j = 0; j < cols2; ++j)
        {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < rows1; ++i)
    {
        for (j = 0; j < cols2; ++j)
        {
            for (k = 0; k < cols1; ++k)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void display(int mult[][10], int rows1, int cols2)
{
    int i, j;

    cout << "Output Matrix:" << endl;
    for (i = 0; i < rows1; ++i)
    {
        for (j = 0; j < cols2; ++j)
        {
            cout << mult[i][j] << " ";
            if (j == cols2 - 1)
                cout << endl;
        }
    }
}

int main()
{
    int rows1, cols1, rows2, cols2;

    cout << "Enter the rows and columns of the first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter the rows and columns of the second matrix: ";
    cin >> rows2 >> cols2;

    if (multipliable(cols1, rows2) == false)
    {
        do
        {
            cout << "Matrices with such coordinates cannot be multiplied!\nPlease enter valid values." << endl;
            cout << "Enter the rows and columns of the first matrix: ";
            cin >> rows1 >> cols1;
            cout << "Enter the rows and columns of the second matrix: ";
            cin >> rows2 >> cols2;
        } while (multipliable(cols1, rows2) == true);
    }

    int matrix1[10][10];
    int matrix2[10][10];
    int result[10][10];

    inputAandB(matrix1, matrix2, rows1, cols1, rows2, cols2);
    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);
    display(result, rows1, cols2);

    return 0;
}