#include <iostream>

using namespace std;

int strlen(char *str)
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

void removeDigits(char arr[], int size)
{
    if (size == 0)
    {
        return;
    }
    else if (*arr >= '0' && *arr <= '9')
    {
        cout << "";
        *arr++;
    }
    else
    {
        cout << *arr;
        *arr++;
    }
    return removeDigits(arr, --size);
}

int main()
{
    char string[100];

    cout << "Enter a random string: ";
    cin >> string;
    int size = strlen(string);

    cout << "The string without digits: ";
    removeDigits(string, size);

    return 0;
}