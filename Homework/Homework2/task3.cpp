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

void merge(char *str1, char *str2)
{
    if (strlen(str1) != '\0' && strlen(str2) != '\0')
    {
        cout << *str1;
        cout << *str2;
        merge(str1 + 1, str2 + 1);
    }
    else if (strlen(str1) != '\0')
    {
        cout << *str1;
        merge(str1 + 1, str2);
    }
    else if (strlen(str2) != '\0')
    {
        cout << *str2;
        merge(str1, str2 + 1);
    }
    else
        return;
}

int main()
{
    char arr1[64];
    char arr2[64];

    cout << "Enter a character array: ";
    cin.getline(arr1, 64);

    cout << "Enter a second character array: ";
    cin.getline(arr1, 64);

    cout << "The combined character arrays: ";
    merge(arr1, arr2);

    return 0;
}