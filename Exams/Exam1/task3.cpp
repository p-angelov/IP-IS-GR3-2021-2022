#include <iostream>

using namespace std;

void fillArray(int arr[], int limit)
{
    for (int i = 0; i < limit; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int arrLimit;

    cout << "Enter the number of elements of the input array: ";
    cin >> arrLimit;
    if (arrLimit > 1000)
    {
        do
        {
            cout << "Invalid input! Please enter a number smaller or equal than 1000: ";
            cin >> arrLimit;

        } while (arrLimit > 1000);
    }

    int inversions = 0;

    int inversionArr[arrLimit];

    fillArray(inversionArr, arrLimit);

    for (int i = 0; i < arrLimit; i++)
    {
        for (int j = 0; j < arrLimit; j++)
        {
            if (i < j && inversionArr[i] > inversionArr[j])
            {
                inversions++;
            }
        }
    }

    cout << "There are " << inversions << " inversions!";

    return 0;
}