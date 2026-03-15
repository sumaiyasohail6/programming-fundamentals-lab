#include<iostream>
using namespace std;
int main()
{string fig,circle,square,rectangle,triangle;
cin>>fig;
 float area;
 if(fig=="square")
 {int s;
cin>>s;
area=s*s;
cout<<area<<endl;
}   
if(fig=="rectangle")
{ int l,w;
cin>>l;
cin>>w;
area=l*w;
cout<<area;}
if(fig=="circle"){
int r;
cin>>r;
area=3.14*r*r;
cout<<area;
}
if(fig=="triangle")
{ 
int b,h;
cin>>b;
cin>>h;
area=(1.0/2)*b*h;
cout<<area;    
}
cin.get();
return 0;    
}