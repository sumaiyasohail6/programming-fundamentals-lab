#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // counters for range
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    // read numbers and count them
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num < 200)
        {
            count1++;
        }
        else if (num < 400)
        {
            count2++;
        }
        else if (num < 600)
        {
            count3++;
        }
        else if (num < 800)
        {
            count4++;
        }
        else
        {
            count5++;
        }
    } // calculate percentages
    double p1 = (count1 * 100.0) / n;
    double p2 = (count2 * 100.0) / n;
    double p3 = (count3 * 100.0) / n;
    double p4 = (count4 * 100.0) / n;
    double p5 = (count5 * 100.0) / n;
    // format output to 2 decimal places
    cout << fixed << setprecision(2);
    // print results
    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;
    cin.get();
    return 0;
}
