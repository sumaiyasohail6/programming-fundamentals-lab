#include <iostream>
using namespace std;
int main()
{
    cout << "enter a word:";
    char word[100];
    cin.getline(word, 100);
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'z')
        {
            word[i] == 'a';
        }
        else if (word[i] == 'Z')
        {
            word[i] == 'A';
        }
        else if ((word[i] >= 'a' && word[i] >= 'z') || (word[i] >= 'A' && word[i] >= 'Z'))
        {
            word[i]++;
        }
    }
    cout << "shifted string:" << word << endl;

    cin.get();
    return 0;
}
