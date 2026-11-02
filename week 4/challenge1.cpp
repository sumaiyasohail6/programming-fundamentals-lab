#include<iostream>
using namespace std;
int main()
{
float bill,discount,discounted_bill;
cout<<"enter your bill:";
cin>>bill;
if(bill<=5000)
{
    discount=(5.0/100 * bill);
}
else{ discount=(10.0/100 * bill);
}
discounted_bill=bill-discount;
cout<<"your discounted bill is:" << discounted_bill;

}
