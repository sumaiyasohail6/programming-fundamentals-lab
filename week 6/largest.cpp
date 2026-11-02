#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter number " << i + 1 << " : ";
        cin >> num[i];
    }
    int largest = num[0];
    for (int i = 1; i < n; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    cout << "largest number is " << largest << endl;
    cin.get();
    return 0;
}
