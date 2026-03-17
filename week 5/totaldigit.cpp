
#include<iostream>
using namespace std;
int main()
{cout<<"enter a number:";
    int d;
    cin>>d;
    int count=0;
    while(d>0)
    {
        d=d/10;   //removes last digit
        count++;
    }
    cout<<"number of digits:"<<count << endl;
    
cin.get();
return 0;
}
