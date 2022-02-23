#include <iostream>

using namespace std;

int defaultParameter(int k = 5);

bool isPrime(int n)
{
    if (n == 0 || n == 1)
        return 0;
    else if
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
                return 1;
        }
    }
    else
        return 1;
}

int main()
{
    int numLimit;
    int primeFactor;
    int userFactor;

    cout << "Please enter a limit of Hamming numbers to show: ";
    cin >> numLimit;
    cout << "Enter a prime factor k bigger than 5 or type 0 for the default one - 5: ";
    cin >> userFactor;

    if (userFactor > 5)
    {
        if (isPrime(userFactor) == true)
            userFactor = primeFactor;
        else
            cout << "The chosen factor isn't a prime number!"
    }
    else if (userFactor == 0)
        primeFactor = defaultParameter();

    return 0;
}
