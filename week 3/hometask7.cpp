#include<iostream>
using namespace std;
main()
{
cout<<"enter movie name:";
string name;
cin>>name;
cout<<"enter adult ticket price:$";
int adprice;
cin>>adprice;
cout<<"enter child ticket price:$";
int chprice;
cin>>chprice;
cout<<"enter number of adult tickets sold:";
int n;
cin>>n;
cout<<"enter number of child tickets sold:";
int m;
cin>>m;
cout<<"enter percentage of amount to be donated:";
int percent;
cin>>percent;
float total;
total=(adprice*n)+(chprice*m);
float donation;
donation=(percent/100.0)*total;
float remain;
remain=total-donation;
cout<<"movie: " << name <<endl ;
cout<<"total amount generated from tickets sale:$ " << total << endl;
cout<<"donation to charity:$ " <<donation << endl;
cout<<"remaining amount after donation:$ " << remain; 

cin.get();
cin.get();
}