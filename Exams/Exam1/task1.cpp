#include <iostream>

using namespace std;

int complexOperationWith(int nDigitNum, int singleDigitNum)
{
    cout << "Please enter two numbers - to the first there is no limit, \n"
         << "the second must be one digit big: ";
    cin >> nDigitNum >> singleDigitNum;

    int result;

    if (singleDigitNum > 9 && singleDigitNum < 0)
    {
        do
        {
            cout << "Invalid input! Please enter a second number big one digit: ";
            cin >> singleDigitNum;

        } while (singleDigitNum > 9 && singleDigitNum < 0);
    }

    for (int j = 0; j < nDigitNum; j++)
    {
        for (int i = 0; i < singleDigitNum; i++)
        {
            int digit = nDigitNum % 10;
            int resultDigit = digit * singleDigitNum;
            if (resultDigit > 9)
            {
                resultDigit = resultDigit / 10;
            }
            nDigitNum = (nDigitNum - digit) / 10;

            cout << resultDigit;

            int tempResult = resultDigit * 10 * i;

            tempResult += tempResult;
        }
    }

    cout << "f(" << nDigitNum << ", " << singleDigitNum << ") -> " << result;
}

int main()
{
    int manyDigitNum;
    int singleDigitNum;

    complexOperationWith(manyDigitNum, singleDigitNum);

    return 0;
}
