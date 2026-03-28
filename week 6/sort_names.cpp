#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "enter number of students:";
    cin >> n;
    string students[n];
    cout << "enter names of " << n << " students:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> students[i];
    } //sort logic
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j] > students[j + 1])
            { // swap string using temporary vriable
                string temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    cout << "\nStudents in alphabetic order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << students[i] << endl;
    }
    cin.get();
    return 0;
}