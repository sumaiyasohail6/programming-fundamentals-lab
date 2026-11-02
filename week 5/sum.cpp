#include<iostream>
using namespace std;
int main()
{
    int n,digit;
    cout<<"enter number:";
    cin>>n;
    int sum=0;
    while(n>0)
    {
     digit=n%10;
     sum=sum+digit;
     n=n/10;   
    }
    cout<<"sum of digits is:" << sum ;
cin.get();
return 0;
}
