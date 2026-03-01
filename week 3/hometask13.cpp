#include<iostream>
using namespace std;

main()
{
cout << "Enter a 4-digit number : " ;
int digit;
cin >> digit;

int sum1;
sum1 = digit % 10;

int num1;
num1 = digit/10;

int sum2;
sum2 = num1 % 10;

int num2;
num2 = digit/100;

int sum3;
sum3 = num2 % 10;

int num3;
num3 = digit / 1000;

int sum4;
sum4 = num3 % 10;

int sum;
sum = sum1 + sum2 + sum3 + sum4;
cout << "Sum of individual digits: "<<sum;
}