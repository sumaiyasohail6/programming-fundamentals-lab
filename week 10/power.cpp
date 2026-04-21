#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float number1,number2;
    cout<<"Enter base: ";
    cin>>number1;
    cout<<"Enter exponent: ";
    cin>>number2;
    cout<<number1<<"raised to power"<<number2 <<"is"<<pow(number1,number2);
    return 0;
}