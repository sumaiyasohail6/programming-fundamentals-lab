#include<iostream>
using namespace std;
int main()
{
float advance,price,salary,money;
int month;
salary=10000;
price=50000;
advance=salary*(50.0/100);
money=advance*6;
month=price/advance;
if(money>=price)
{ 
cout<<"yes";    
}
else{
 cout<<"months required to buy laptop:"<< month ;  
}
cin.get();
return 0;
}
