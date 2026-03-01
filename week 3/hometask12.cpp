#include<iostream>
using namespace std;
main()
{
cout<<"enter number of square meters you can paint(n):";
int n;
cin>>n;
cout<<" height of single wall:";
int h;
cin>>h;
cout<<"width of single wall:";
int w;
cin>>w;
int walls;
walls=n/ (w*h);
cout<<" number of walls you can paint:  " << walls ;
cin.get();
cin.get();
}
