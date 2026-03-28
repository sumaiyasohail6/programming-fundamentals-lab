#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "enter number of customers:";
    cin >> n;
    string customers[n];
    cout << "enter names of " << n << " customers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> customers[i];
    }
    char letter;
    cout << "enter a letter to check:";
    cin >> letter;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (customers[i][0] == letter)
        {
            count++;
        }
    }
    cout << "total names starting with'" << letter << "': " << count << endl;
    cin.get();
    return 0;
}
