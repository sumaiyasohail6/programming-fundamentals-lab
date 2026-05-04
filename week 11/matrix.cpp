#include <iostream>
using namespace std;

void printCars(int cars[][5], int rowsize);
int main()
{
    const int rowsize = 5;
    const int columnsize = 5;
    int cars[rowsize][columnsize] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}};
    printCars(cars, rowsize);
}
void printCars(int cars[][5], int rowsize)
{
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << cars[i][j] << "\t";
        }
        cout << endl;
    }
}