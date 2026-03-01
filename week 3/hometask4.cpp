#include<iostream>
using namespace std;
main()
{
cout<<"enter imposter count(i):" ;
float i;
cin>>i;
cout<<"enter player count(p):";
int p;
cin>>p;
float chance;
chance=100*(i/p);
cout<<"chance is  " << chance << "%" ;
cin.get();
cin.get();
}
