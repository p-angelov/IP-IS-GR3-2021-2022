#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void yahtzee(int throws)
{
    srand(time(NULL));
    int fiveDiceArr[4];
    for (int i = 0; i < throws; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int number = rand();
            rand() % 6 + 1;
            cin >> fiveDiceArr[j];
        }

        for (int k = 0; k < i; k++)
        {
            cin >> fiveDiceArr[k];
        }
    }
}

int main()
{
    int throws;

    cout << "Please enter number of throws: ";
    cin >> throws;
    yahtzee(throws);

    return 0;
}