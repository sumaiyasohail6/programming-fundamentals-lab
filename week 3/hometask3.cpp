#include<iostream>
using namespace std;
main()
{
cout<<"enter initial velocity(m/s):" ;
int v;
cin>>v;
cout<<"enter acceleration(m/s^2):";
int a;
cin>>a;
cout<<"enter time(s):";
int t;
cin>>t;
int final;
final=(a*t)+v;
cout<<"final velocity (m/s) : " << final;
cin.get();
cin.get();
}
