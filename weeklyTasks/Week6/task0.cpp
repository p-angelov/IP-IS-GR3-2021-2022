#include <iostream>

using namespace std;

bool containsOne(int number)
{
    while (number != 0)
    {
        int currDigit = number % 10;
        if (currDigit == 1)
            return true;
        number /= 10;
    }

    return false;
}
int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    containsOne(number);

    cout << boolalpha << containsOne(number);

    return 0;
}