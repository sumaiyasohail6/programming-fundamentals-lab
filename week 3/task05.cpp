#include<iostream>
using namespace std;
main()
{
cout<<"enter your name:" ;
string name;
cin>>name;
cout<<"enter matric marks( out of 1100):";
float matric;
cin>>matric;
cout<<"enter inter marks(out of 550):";
float inter;
cin>>inter;
cout<<"enter ECAT marks(out of 400):";
float ecat;
cin>>ecat;
float aggregate;
aggregate=((matric/1100)*0.10)+((inter/550)*0.40)+((ecat/400)*0.50);
cout<<" aggregate for " << name << "  is:  " << aggregate*100 << "%" ;
cin.get();
cin.get();
}
