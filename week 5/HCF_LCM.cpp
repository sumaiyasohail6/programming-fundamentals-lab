#include<iostream>
using namespace std;
int main()
{   int hcf,lcm,num1,num2;
    cout<<"enter first number:";
    int a;
    cin>>a;
    cout<<"enter second number:";
    int b;
    cin>>b;
     a=num1;
     b=num2;
while(b!=0)
{
    int remainder=a%b;
    a=b;
    b=remainder;
}
  hcf=a;
  lcm=(num1*num2)/hcf;
  cout<<"LCM is " << lcm <<endl;
  cout<<"HCF is " << hcf ;

cin.get();
return 0;
}
