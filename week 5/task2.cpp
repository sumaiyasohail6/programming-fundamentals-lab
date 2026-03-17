#include<iostream>
using namespace std;
int main()
{
  int num=0;
  int sum=0;
  while(num>=0)  
  {
    sum=sum+num;
    cout<<"enter a number:";
    cin>>num;
  }
  cout<<"Sum: "<<sum; 
cin.get();
return 0;
}
