#include <iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cout << "enter number of elements:";
    cin >> n;
    int arr[n];
    int count = 0;
    cout << "enter " << n << " numbers,one per line:" << endl;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (isAlreadyEntered(arr, count, input))
        {
            cout << "already entered: " << input << endl;
        }
        else
        {
            arr[count] = input;
            count++;
        }
    }
    cout << "unique numbers entered:";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cin.get();
    return 0;
}
