#include<iostream>
using namespace std;
main()
{
cout<<"enter charge in coulombs:";
int charge;
cin>>charge;
cout<<"enter time in seconds:";
int time;
cin>>time;
int current;
current=charge/time;
cout<<"the current is:"<<current;
}