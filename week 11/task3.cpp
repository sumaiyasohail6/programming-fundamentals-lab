#include <iostream>
using namespace std;

void printToyotaBlueCars(int cars[][5], int rowSize);
void printRedCars(int cars[][5], int rowSize);
void printNissanCars(int cars[][5], int rowSize);
int converter(int cars[][5], string colour);
void printCars(int cars[][5], int rowSize);
main()
{
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {{10, 7, 12, 10, 4},
                                  {18, 11, 15, 16, 2},
                                  {23, 19, 0, 3, 17},
                                  {7, 12, 17, 16, 8},
                                  {3, 5, 6, 2, 1}};
    printToyotaBlueCars(cars, rowSize);
    cout << endl;
    printRedCars(cars, rowSize);
    cout << endl;
    printNissanCars(cars, rowSize);
    cout << endl;
    cout << "Enter Colour: ";
    string colour;
    cin >> colour;
    converter(cars, colour);
    cout << endl;
    printCars(cars, rowSize);
}

void printToyotaBlueCars(int cars[][5], int rowSize)
{
    cout << "Blue Toyota Cars: " << cars[1][3];
}

void printRedCars(int cars[][5], int rowSize)
{
    int sum = 0;
    for (int i = 0; i < rowSize; i++)
    {
        sum += cars[i][0];
    }
    cout << "Tota Red Cars: " << sum;
}

void printNissanCars(int cars[][5], int rowSize)
{
    int sum = 0;
    for (int i = 0; i < rowSize; i++)
    {
        sum += cars[2][i];
    }
    cout << "Tota Nissan Cars: " << sum;
}

int converter(int cars[5][5], string colour)
{
    int sum1 = 0;
    if (colour == "red")
    {
        for (int i = 0; i < 4; i++)
        {
            sum1 += cars[i][0];

            cout << "Total Red Cars: " << sum1;
        }
    }
    else if (colour == "black")
    {
        for (int i = 0; i < 5; i++)
        {
            sum1 += cars[i][1];
        }
        cout << "Total Black Cars: " << sum1;
    }
    else if (colour == "brown")
    {
        for (int i = 0; i < 5; i++)
        {
            sum1 += cars[i][2];
        }
        cout << "Total Brown Cars: " << sum1;
    }
    else if (colour == "blue")
    {
        for (int i = 0; i < 5; i++)
        {
            sum1 += cars[i][3];
        }
        cout << "Total Blue Cars: " << sum1;
    }
    else if (colour == "gray")
    {
        for (int i = 0; i < 5; i++)
        {
            sum1 += cars[i][4];
        }
        cout << "Total Gray Cars: " << sum1;
    }
    return sum1;
}

void printCars(int cars[][5], int rowSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << cars[j][i] << "\t";
        }
        cout << endl;
    }
}