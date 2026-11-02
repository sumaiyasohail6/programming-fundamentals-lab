#include<iostream>
using namespace std;
main()
{
cout<<"enter size of fertilizer bag in pounds:" ;
int size;
cin>>size;
cout<<"enter cost of bag: $";
int cost;
cin>>cost;
cout<<"enter area in square feet:";
float area;
cin>>area;
float pound;
pound=cost/size;
cout<<" cost of fertilizer per pound is: $ " <<  pound << endl;
float foot;
foot=cost/area;
cout<<"cost of fertilizing per square foot is: $  " << foot;
cin.get();
cin.get();
}
