#include <iostream>
using namespace std;

void largestColumnFirst(int rows, int M[][5]);
main()
{
    cout << "Enter row size: ";
    int row;
    cin >> row;
    int data[row][5];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter elements at position [" << i << "][" << j << "] :";
            cin >> data[i][j];
        }
    }
    cout << "The original matrix is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << data[i][j] << "\t";
        }
        cout << endl;
    }
    largestColumnFirst(row, data);
}

void largestColumnFirst(int rows, int M[][5])
{
    int maxIndex = 0;
    int maxSum = -1;

    for (int j = 0; j < 5; j++)
    {
        int currentSum = 0;
        for (int i = 0; i < rows; i++)
        {
            currentSum += M[i][j];
        }

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            maxIndex = j;
        }
    }

    if (maxIndex != 0)
    {
        for (int i = 0; i < rows; i++)
        {
            int temp = M[i][0];
            M[i][0] = M[i][maxIndex];
            M[i][maxIndex] = temp;
        }
    }
    cout << "Matrix after processing:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}