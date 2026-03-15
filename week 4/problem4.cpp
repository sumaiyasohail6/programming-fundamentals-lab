#include<iostream>
using namespace std;
int main()
{cout<<"number of red roses:";
int red;
cin>>red;
cout<<"number of white roses:";
int white;
cin>>white;
cout<<"number of tulips:";
int tulip;
cin>>tulip;
float price;
price=(red*2.0)+(white*4.10)+(tulip*2.50);
float discount,payable;
if(price>200)
{discount=price*(20.0/100);
 payable=price-discount;
 cout<<"original price:" << price <<endl;
 cout<<"price after discount:" << payable; 
}


cin.get();
return 0;
}