# include<iostream>
using namespace std;

int printSum (int rowSize, int array[][3]);
main()
{
    cout<<"Enter row size: ";
    int row;
    cin>>row;
    int data[row][3];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<"Enter elements at position ["<<i<<"]["<<j<<"] :";
            cin >> data[i][j];
        }
    }
    cout<<"The sum of elements in the matrix is: "<<printSum ( row, data);
}

int printSum (int rowSize, int array[][3])
{
    int sum = 0;
    for(int i = 0; i<rowSize; i++)
    {
        for(int j = 0; j<3; j++)
        {
            sum += array[i][j];
        }
    }
     return sum;
}