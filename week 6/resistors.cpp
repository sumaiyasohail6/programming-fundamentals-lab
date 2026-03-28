#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of resistors:";
    cin >> n;
    float resistors[n];
    float sum = 0;
    cout << "enter value of resistances " << " : ";
    for (int i = 0; i < n; i++)
    {

        cin >> resistors[i];
        sum = sum + resistors[i];
    }
    cout << "total resistance is " << sum << endl;
    cin.get();
    return 0;
}
