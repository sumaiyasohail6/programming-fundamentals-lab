#include <iostream>
using namespace std;
int main()
{
    cout << "enter lily's age:";
    int age;
    cin >> age;
    cout << "enter washing machine price:";
    int price;
    cin >> price;
    cout << "price of each toy:";
    int toyp;
    cin >> toyp;
    int toycount = 0;
    double savedmoney = 0;
    double moneygift = 10.0; // starts on 2nd birthday
    // loop to count each lilly birthday
    for (int i = 1; i <= age; i++)
    {
        // check if birthday is even or odd
        if (i % 2 == 0)
        {
            // even : gets money
            savedmoney = savedmoney + (moneygift - 1.0); // brother takes 1$
            moneygift += 10.0;                           // increses for next even birthday
        }
        else
        {
            toycount++; // odd: gets toy
        }
    }
    // money from selling toys
    savedmoney += (toycount * toyp);
    // check if she has enough money
    if (savedmoney >= price)
    {
        cout << "Yes" << endl;
        cout << savedmoney - price << endl;
    }
    else
    {
        cout << "NO" << endl;
        cout << price - savedmoney << endl;
    }

    cin.get();
    return 0;
}
