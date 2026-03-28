#include <iostream>
using namespace std;
int main()
{
    cout << "enter a word:";
    char word[100];
    cin >> word;
    for (int i = 0; word[i] != '\0'; i++)
    {
        cout << word[i] << " found at position " << i << endl;
    }

    cin.get();
    return 0;
}