#include <iostream>
#include <cmath>

using namespace std;

void interestingArray(char input)
{
    char *resArr;
    resArr = new char[256];

    if (input == 'a')
    {
        *resArr = 'a';
        cout << *resArr;
    }
    else if(input == 'b')
    {
        *resArr = 'aba';

    }
    else
    {
        return interestingArray(++input);
    }
}

int main()
{
    char input;
    do
    {
        cout << "Enter a letter: ";
        cin >> input;
    } while (!(input >= 'a' && input <= 'z'));

    interestingArray(input);

    return 0;
}