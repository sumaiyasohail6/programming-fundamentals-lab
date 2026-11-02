#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double money;
    int targetyear;
    cin >> money;
    cin >> targetyear;
    int age = 18; // ivan age 
    for (int year = 1800; year <= targetyear; year++)
    {
        if (year % 2 == 0) // even:spend 12000
        {
            money-= 12000;
        }
        else
        {
            money-= 12000 + 50 * age;
        }
        age++;
    } // format to twp decimal places
    cout << fixed <<setprecision(2);
    if(money>=0){
        cout<<"yes he will live a carefree life and will have "<<money <<" dollars left "<<endl;
        
    }else{
        cout<<"he will need "<<-money<<" dollars to survive "<<endl;

    }
cin.get();
return 0;
}
