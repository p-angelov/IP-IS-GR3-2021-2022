#include <iostream>
using namespace std;

int main()
{

    int i, j, r, k = 0, flag = 1;
    unsigned long inputNum;
    int arr[100];

    cout << "Enter a number: ";
    cin >> inputNum;

    while (inputNum < 0)
    {
        cout << "Please enter a positive number!";
        cout << endl;
        cout << "Enter a number: ";
        cin >> inputNum;
    }

    while (inputNum > 0)
    {

        r = inputNum % 10;
        arr[k] = r;
        inputNum = inputNum / 10;
        k++;
    }

    for (i = 0; i < k; i++)
    {
        for (j = i + 1; j < k; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }

    return 0;
}