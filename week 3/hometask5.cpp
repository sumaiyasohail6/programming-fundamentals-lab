#include<iostream>
using namespace std;
main()
{
cout<<"enter name:" ;
string name;
cin>>name;
cout<<"enter target weight loss in kgs:";
int weight;
cin>>weight;
int days;
days=weight*15;
cout<<name <<"will need " << days << "days to lose weight ";
cin.get();
cin.get();
}
