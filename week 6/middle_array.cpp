#include <iostream>
using namespace std;
int main()
{
    int size1, size2;
    // first array input
    cout << "enter number of elements for first array (must be 2):";
    cin >> size1;
    int arr1[size1];
    cout << "enter " << size1 << " elements for first array:" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    // second array input
    cout << "enter number of elements for second array:";
    cin >> size2;
    int arr2[size2];
    cout << "enter " << size2 << " elemnets for second array: " << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    // result output
    cout << "resulting array: [" << arr1[0]; // print first element of array1
    for (int i = 0; i < size2; i++)
    {
        cout << "," << arr2[i]; // print all elements of array2
    }
    cout << "," << arr1[1] << "]" << endl; // print second element of array2
    cin.get();
    return 0;
}
