#include<iostream>
using namespace std;
int main()
{ long num;
int digit,last;
int count=0;
cout<<"enter number:";
cin>>num;
cout<<"enter digit:";
cin>>digit;

for(int n=num;n>0;n=n/10)
{
int last=n%10;   // get last digit
if(last==digit)
{count++;}
}
cout<<"frequency is "<< count;
cin.get();
return 0;
}
