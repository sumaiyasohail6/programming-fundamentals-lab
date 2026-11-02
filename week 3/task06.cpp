#include<iostream>
using namespace std;
main()
{
cout<<"enter size in megabytes:";
int megabytes;
cin>>megabytes;
int bits;
bits=megabytes*1024*1024*8;
cout<<bits;
}