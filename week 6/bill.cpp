#include <iostream>
using namespace std;
int main()
{ // array to store count of coins
    int coins[4];
    double amountdue;
    // user input for coins
    cout << "enter quarters:";
    cin >> coins[0];
    cout << "enter dimes:";
    cin >> coins[1];
    cout << "enter nickles:";
    cin >> coins[2];
    cout << "enter pennies: ";
    cin >> coins[3];
    // input for total due
    cout << "enter total amount due: $";
    cin >> amountdue;
    // total money in pocket
    double totalmoney = (coins[0] * 0.25) + (coins[1] * 0.10) + (coins[2] * 0.05) + (coins[3] * 0.01);
    cout << "Can you pay the amount? ";
    if (totalmoney >= amountdue)
    {
        cout << " Yes" << endl;
    }
    else
    {
        cout << " No" << endl;
    }

    cin.get();
    return 0;
}
