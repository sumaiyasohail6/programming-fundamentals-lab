#include<iostream>
using namespace std;
main()
{
cout<<"enter voltage (in volts):";
int voltage;
cin>>voltage;
cout<<"enter current (in amperes):";
int current;
cin>>current;
int power;
power=voltage*current;
cout<<"power is" <<power<< "watts";
cin.get();
cin.get();
}
