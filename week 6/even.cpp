#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of elements:";
    cin >> n;
    cout << "enter " << n << " numbers:" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << "total even numbers:" << count << endl;

    cin.get();
    return 0;
}