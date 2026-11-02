#include <iostream>
using namespace std;

int countIdenticalArray(int M[][3], int rows);
main()
{
    cout << "Enter row size: ";
    int row;
    cin >> row;
    int data[row][3];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter elements at position [" << i << "][" << j << "] :";
            cin >> data[i][j];
        }
    }
    cout << "The matrix is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << data[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "The count of identical rows in the array: " << countIdenticalArray(data, row) << endl;
}
int countIdenticalArray(int M[][3], int rows)
{
    int count = 0;
    int j = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < rows; j++)
        {
            if (M[i][0] == M[j][0] && M[i][1] == M[j][1] && M[i][2] == M[j][2])
            {
                count = count + 2;
            }
        }
    }
    return count;
}