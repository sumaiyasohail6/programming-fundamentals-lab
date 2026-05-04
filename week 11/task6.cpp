#include <iostream>
using namespace std;
string fire(char board[5][5], string coordinate);
main()
{
    char array[5][5] = {
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'},
    };
    cout << "Enter coordinate to fire torpedo: ";
    string coordinate;
    cin >> coordinate;
    cout << "Result: " << fire(array, coordinate);
}

string fire(char board[5][5], string coordinate)
{
    int row = coordinate[0] - 'A';

    int col = coordinate[1] - '1';

    if (board[row][col] == '*')
    {
        return "BOOM";
    }
    else
    {
        return "splash";
    }
}