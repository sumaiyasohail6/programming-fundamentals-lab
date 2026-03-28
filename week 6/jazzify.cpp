#include <iostream>
#include <string>
using namespace std;
int main()
{
    int size;
    cout << "enter number of chords:";
    cin >> size;
    string chords[size];
    cout << "enter " << size << " chords one per line :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> chords[i];
    }
    for (int i = 0; i < size; i++)
    {
        string current = chords[i];
        // find last position in index
        int lastindex = 0;
        while (current[lastindex] != '\0')
        {
            lastindex++;
        }
        lastindex = lastindex - 1;
        // bool to check for 7
        bool endwithSeven = false;
        if (lastindex >= 0 && current[lastindex] == '7')
        {
            endwithSeven = true;
        } // if it doesnot end with 7 add it
        if (endwithSeven == false)
        {
            chords[i] = current + '7';
        }
    } // final output
    cout << "Jazzified chords:[";
    for (int i = 0; i < size; i++)
    {
        cout << chords[i];
        if (i < size - 1)
        {
            cout << " ,";
        }
    }
    cout << "]" << endl;

    cin.get();
    return 0;
}