#include<iostream>
using namespace std;
int main()
{ cout<<"enter first number:";
float n1;
cin>>n1;
cout<<"enter operator:";
char op;
cin>>op;
cout<<"enter second number:";
float n2;
cin>>n2;
float sub;
sub=n1-n2;
if(op=='+')
{cout<< n1 << "-" << n2 << "="<< sub;
}
float add=n1+n2;
if(op=='-'){
 cout<< n1 << "+" << n2 << "=" << add;  
}
float mul=n1*n2;
if(op=='/'){
    cout<< n1 << "*" <<n2 << "="<< mul; 
}
float divide=n1/n2;
if(op=='*'){ 
  cout<<n1 <<"/" << n2 <<"=" <<divide;  
}
cin.get();
return 0;
}