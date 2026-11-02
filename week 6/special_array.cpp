#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the size of array:";
    cin >> size;
    int arr[size];
    cout << "enter " << size << " elements of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bool special = true;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != arr[i] % 2)
        {
            special = false;
            break;
        }
    }
    if (special)
    {
        cout << "The array is special" << endl;
    }
    else
    {
        cout << "Array is not special" << endl;
    }
    cin.get();
    return 0;
}