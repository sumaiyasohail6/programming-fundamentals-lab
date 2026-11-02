#include <iostream>
using namespace std;

void timeTravel(int h, int m);
main()
{
    cout << "Enter hours:  ";
    int hours;
    cin >> hours;
    cout << "Enter minutes:  ";
    int min;
    cin >> min;
    timeTravel(hours, min);
}

void timeTravel(int h, int m)
{
    int hSum = h;
    int mSum = m + 15;
    if (mSum > 59)
    {
        mSum = mSum - 60;
        hSum = hSum + 1;
        if (hSum > 23)
        {
            hSum = 00;
        }
    }
    cout << hSum << ":";
    if (mSum < 10)
    {
        cout << "0";
    }
    cout << mSum;
}