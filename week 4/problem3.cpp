#include<iostream>
using namespace std;
int main()
{cout<<"temperature of city 1 :";
float temp1;
cin>>temp1;
cout<<" temperature of city 2:";
float temp2;
cin>>temp2;
float diff=temp2-temp1;
if(diff>10||diff<-10)
{cout<<"Differnce is too big "<<endl;}
cout<<"program ends";
cin.get();
return 0;
}