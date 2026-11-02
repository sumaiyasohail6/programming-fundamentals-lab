#include<iostream>
using namespace std;
main()
{
cout<<"enter paint area(n):";
int n;
cin>>n;
cout<<"enter height(h):";
int h;
cin>>h;
cout<<"enter width(w):";
int w;
cin>>w;
int walls;
walls=n/ (w*h);
cout<<"walls painted:  " << walls ;
cin.get();
cin.get();
}
