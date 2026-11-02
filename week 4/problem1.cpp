#include<iostream>
using namespace std;
int main()
{float discount,discounted_price;
 string ireland;
cout<<"enter country name:";
 string name;
 cin>>name;
 cout<<"enter ticket price:";
 float price;
 cin>>price;
 if(name=="ireland")
 {discount=price * (10.0/100);
  discounted_price=price-discount;
   cout<<"discounted price:" << discounted_price;
 }
 else{
  discount=price * (5.0/100);
  discounted_price=price-discount;
  cout<<"discounted price is:" << discounted_price; 
 }   

cin.get();
return 0;
}