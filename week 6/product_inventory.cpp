#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "enter number of products:";
    cin >> n;
    string names[n];
    double prices[n];
    int quantity[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter names of product" << i + 1 << " :" << endl;

        cin >> names[i];
        cout << "enter price of " << names[i] << ": $";
        cin >> prices[i];
        cout << "Enter quantity of " << names[i] << " :";
        cin >> quantity[i];
    }
    cout << "\nProduct Inventory Report" << endl;
    cout << "----------------------------" << endl;
    // set 2 decimal places
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++)
    {
        double totalvalue = prices[i] * quantity[i];
        cout << names[i] << ": $" << prices[i] << ", " << "in stock, total value: $" << totalvalue << endl;
    }
    cin.get();
    return 0;
}