#include <iostream>

using namespace std;

int circle(int x1, int y1, int x2, int y2, int r1, int r2)
{
    int distanceSq = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    int radiusSumSq = (r1 + r2) * (r1 + r2);
    if (distanceSq == radiusSumSq)
        return 1;
    else if (distanceSq > radiusSumSq)
        return -1;
    else
        return 0;
}

int main()
{
    // int x1 = -10, y1 = 8;
    // int x2 = 14, y2 = -24;
    // int r1 = 30, r2 = 10;

    int x1, y1, x2, y2, r1, r2;

    cout << "Please enter the coordinates and the radius of the first circle: ";
    cin >> x1 >> y1 >> r1;
    cout << "Please enter the coordinates and the radius of the second circle: ";
    cin >> x2 >> y2 >> r2;

    int returnValue = circle(x1, y1, x2, y2, r1, r2);

    if (returnValue == 1)
        cout << "Circles touch each other.";
    else if (returnValue < 0)
        cout << "Circles don't touch each other.";
    else
        cout << "Circles intersect each other.";

    return 0;
}