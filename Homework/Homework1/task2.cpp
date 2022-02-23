#include <iostream>
#include <cmath>

using namespace std;

int isPalindrome(int n)
{
    int rev = 0;
    for (int i = n; i > 0; i /= 10)
        rev = rev * 10 + i % 10;

    return (n == rev);
}

int main()
{
    int inputLimit;
    cout << "Enter how many numbers do you want to see: ";
    cin >> inputLimit;
    int counter = 0;

    for (int num = 0; num < inputLimit; num++)
    {
        if (isPalindrome(num) && isPalindrome(num * num) && num > 3)
            cout << num << " -> " << num * num << '\n';
    }
    return 0;
}