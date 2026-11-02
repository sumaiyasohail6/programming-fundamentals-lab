#include <iostream>
using namespace std;
void printReverseArray(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "enter number of elements:";
    cin >> n;

    if (n <= 0)
    {
        cout << "invalid input. number of elements must be greater than 0" << endl;
        return 0;
    }

    int arr[n];
    cout << "enter" << n << " numbers,one per line:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "numbers in reverse order:";
    printReverseArray(arr, n);

        cin.get();
    return 0;
}
