#include <iostream>
using namespace std;
int main()
{
    cout << "enter a word:";
    char word[100];
    cin >> word;
    int length = 0;
    while (word[length] != '\0')
    {
        length++;
    }
    cout << "reverse word:";
    for (int i = length - 1; i >= 0; i--)
    {
        cout << word[i];
    }
     cin.get();
    return 0;
}