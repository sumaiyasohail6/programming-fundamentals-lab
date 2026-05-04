#include <iostream>
using namespace std;

main()
{
    int data[3][3];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter elements at position [" << i << "][" << j << "] :";
            cin >> data[i][j];
        }
    }
    cout << "The entered matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << data[i][j] << "\t";
        }
        cout << endl;
    }

    if (data[0][0] && data[1][1] && data[2][2] == 1)
    {
        cout << "The entered matrix is an identity matrix" << endl;
    }
    else
    {
        cout << "The entered matrix is not an identity matrix";
    }
}