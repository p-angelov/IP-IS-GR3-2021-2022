#include <iostream>
#include <cmath>

using namespace std;

const int SIZE = 20;

void fillMatrix(int matrix[][SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool isValidDegree(int input)
{
    if (input == 0)
        return false;
    else
    {
        while (input > 0 || input < 0)
        {
            double temp = input / 90;
            if (temp == 1)
            {
                return true;
            }
            temp = input;
        }
    }
    return false;
}

int rotationCounter(int degrees)
{
    int counter;
    if (degrees < 0)
    {
        counter = degrees / 90 * (-1);
    }
    else
    {
        counter = degrees / 90;
    }
    return counter;
}

void rotatorCW(int matrix[][SIZE], int n, int degrees)
{

    int counter = rotationCounter(degrees);

    if (counter == 0)
    {
        printMatrix(matrix, n);
    }

    int temp[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > n; j--)
        {
            for (int k = 0; k < n; k++)
            {
                temp[i][j] = matrix[k][i];
            }
        }
    }

    return rotatorCW(temp, n, degrees - 90);
}

void rotatorCCW(int matrix[][SIZE], int n, int degrees)
{
     int counter = rotationCounter(degrees);

    if (counter == 0)
    {
        printMatrix(matrix, n);
    }

    int temp[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > n; j--)
        {
            for (int k = 0; k < n; k++)
            {
                temp[i][j] = matrix[k][i];
            }
        }
    }

    return rotatorCW(temp, n, degrees + 90);
}

int main()
{
    int n;
    int degrees;

    cout << "Enter the size of a quadratic matrix: ";
    cin >> n;
    int matrix[n][n];

    cout << "Enter the elements of this matrix:" << endl;
    fillMatrix(matrix, n);

    cout << "Enter degrees of rotation: ";
    cin >> degrees;
    do
    {
        cout << "Enter degrees of rotation: ";
        cin >> degrees;
    } while (isValidDegree(degrees) == true);

    if (degrees < 0)
        rotatorCCW(matrix, n, degrees);
    else
        rotatorCW(matrix, n, degrees);

    return 0;
}