#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

void printComplexMatrix(int n, int k)
{
    int matrix[n][n];

    // Filling the matrix
    int temp = k;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if ((i + j) == (n - 1))
            {

                matrix[i][j] = temp;
                temp++;
            }
            else if ((i + j) == n)
            {
                int m = k + i;
                matrix[i][j] = factorial(m);
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Printing the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] >= 0 && matrix[i][j] < 10)
            {
                cout << matrix[i][j] << "   ";
            }
            else if (matrix[i][j] >= 10 && matrix[i][j] < 100)
            {
                cout << matrix[i][j] << "  ";
            }
            else if (matrix[i][j] >= 100 && matrix[i][j] < 1000)
            {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n, k;
    cout << "Enter number of rows and cols of a quadratic matrix and a number K: ";
    cin >> n >> k;

    printComplexMatrix(n, k);

    return 0;
}