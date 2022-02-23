#include <iostream>
#include <cmath>

using namespace std;

int countDigit(int n)
{
    if (n == 0)
        return 0;

    return 1 + countDigit(n / 10);
}

void print_each_digit(unsigned long int x)
{
    if (x >= 10)
        print_each_digit(x / 10);

    int digit = x % 10;

    int numOfDigits = 0;

    while (x)
    {
        x /= 10;
        numOfDigits++;
    }

    cout << digit << "^" << numOfDigits << " + ";
}

bool check(int n)
{
    int l = countDigit(n);
    int dup = n;
    int sum = 0;

    while (dup)
    {
        sum += pow(dup % 10, l);
        dup /= 10;
    }

    return (n == sum);
}

int main()
{
    int inputNum;

    cout << "Enter a number: ";
    cin >> inputNum;

    if (check(inputNum))
    {
        print_each_digit(inputNum);
        cout << "= " << inputNum << " - YES";
    }
    else
    {
        print_each_digit(inputNum);
        cout << "= " << inputNum << " - NO";
    }
    return 0;
}
