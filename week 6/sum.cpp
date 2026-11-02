#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of elements:";
    cin >> n;
    cout << "enter " << n << "numbers:" << endl;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "sum is:" << sum;

    cin.get();
    return 0;
}