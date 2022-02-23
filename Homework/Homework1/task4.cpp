#include <iostream>

using namespace std;

int main()
{
    unsigned long num, max_num;
    int array[10], digit, count = 0, i, j, temp;

    cout << "Enter a number: ";
    cin >> num;

    while (num < 0)
    {
        cout << "Please enter a positive number: ";
        cin >> num;
    }

    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        array[count] = digit;
        count++;
    }

    for (i = 0; i < count; ++i)
    {
        for (j = i + 1; j < count; ++j)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    j = 1;
    max_num = 0;

    for (i = count - 1; i >= 0; --i)
    {
        max_num += array[i] * j;
        j *= 10;
    }

    cout << max_num;
}