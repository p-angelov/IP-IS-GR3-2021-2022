#include <iostream>

using namespace std;

bool isTime(int time)
{

    int temp = time % 100;
    int temp2 = time % 
    if (temp < 60)
        return true;
    

    return false;
}

int main()
{
    int time1, time2;

    cout << "Enter two valid times: ";
    cin >> time1 >> time2;

    if (isTime(time1) && isTime(time2))
        cout << "They are valid times!";
    else
        cout << "Invalid!";

    return 0;
}