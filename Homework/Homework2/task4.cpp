#include <iostream>

using namespace std;

int lettersCount(char *string)
{
    int counter = 0;
    while (*string != '\0')
    {
        if ((*string >= 'a' && *string <= 'z') || (*string >= 'A' && *string <= 'Z'))
        {
            ++counter;
        }
        ++string;
    }
    return counter;
}

bool isAnagram(char *str1, char *str2)
{
    if (lettersCount(str1) == lettersCount(str2))
    {
        int i = 0;
        while (str1[i] != '\0' && str2[i] != '\0')
        {
            bool isLetter = ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z'));
            if (!isLetter)
            {
                i++;
                continue;
            }
            char currentLetter = str1[i];
            int counter1 = 0;
            int counter2 = 0;
            while (*str1 != '\0')
            {
                if (*str1 == currentLetter || *str1 + 32 == currentLetter || *str1 - 32 == currentLetter)
                {
                    counter1++;
                }
                str1++;
            }
            while (*str2 != '\0')
            {
                if (*str2 == currentLetter || *str2 + 32 == currentLetter || *str2 - 32 == currentLetter)
                {
                    counter2++;
                }
                str2++;
            }
            if (counter1 != counter2)
                return false;

            i++;
        }
        return true;
    }
    else
        return false;
}

int main()
{
    char str1[100] = "A B B A";
    char str2[100] = "baba";

    if (isAnagram(str1, str2) == 0)
        cout << "The strings aren't anagrams of each other!";
    else
        cout << "The string are anagrams of each other!";

    return 0;
}