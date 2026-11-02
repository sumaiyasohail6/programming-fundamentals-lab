#include<iostream>
using namespace std;
int main()
{
cout<<"enter current world population:" ;
int population;
cin>>population;
cout<<"enter number of births per month(n):";
int n;
cin>>n;
int population_in_three_decades;
population_in_three_decades=(n*30*12)+population;
cout<<"population in three decades will be " << population_in_three_decades ;
cin.get();
cin.get();
}
