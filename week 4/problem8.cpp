#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter a number:";
    cin>>number;
    if(number==1)
    {cout<<"one"<<endl;}
    if(number==2) 
    {cout<<"Two"<<endl;}
    if(number==3) 
    {cout<<"Three";}
    if(number==4)
    {cout<<"Four"<<endl;}
    if(number==5)
    {cout<<"Five"<<endl;}
    if(number==6)
    {cout<<"Six"<<endl;}
    if(number==7)
    {cout<<"Seven"<<endl;}
    if(number==8)
    {cout<<"Eight"<<endl;}
    if(number==9)
    {cout<<"Nine"<<endl;}
    if(number==10)
    {cout<<"Ten"<<endl;}
    if(number==11)
    {cout<<"eleven"<<endl;}
    if(number==12)
    {cout<<"Twelve"<<endl;}
    if(number==13)
    {cout<<"Thirteen"<<endl;}
    if(number==14)
    {cout<<"Fourteen"<<endl;}
    if(number==15)
    {cout<<"Fifteen";}
    if(number==16)
    {cout<<"Sixteen";}
    if(number==17)
    {cout<<"Seventeen";}
    if(number==18)
    {cout<<"Eighteen";}
    if(number==19)
    {cout<<"Nineteen";}


    int ones=number%10;
    int tens=number/10;

    if(number>=20&&number<=99)

    { if(tens==2) 
    {cout<<"Twenty";}
    if(tens==3)
    {cout<<"Thirty";}
    if(tens==4)
    {cout<<"Forty";}
    if(tens==5)
    {cout<<"Fifty";}
    if(tens==6)
    {cout<<"sixty";}
    if(tens==7)
    {cout<<"Seventy";}
    if(tens==8)
    {cout<<"Eighty";}
    if(tens==9)
    {cout<<"Ninety";}
    }
   if(number>=20&&number<=99) {
if(ones==1)
{cout<<"One";}
if(ones==2)
{cout<<"Two";}
if(ones==3)
{cout<<"Three";}
if(ones==4)
{cout<<"Four";}
if(ones==5)
{cout<<"Five";}
if(ones==6)
{cout<<"Six";}
if(ones==7)
{cout<<"Seven";}
if(ones==8)
{cout<<"Eight";}
if(ones==9)
{cout<<"Nine";}
   }
if(number==100)
{cout<<"hundred";}

cin.get();
return 0;    
}