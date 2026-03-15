#include<iostream>
using namespace std;
int main()
{cout<<"enter name of first brother:";
 string n1;
 cin>>n1;
 cout<<"enter age of first brother:";
 int age1;
 cin>>age1;
 cout<<"enter name of second brother:";
 string n2;
 cin>>n2;
cout<<"enter age of second brother:";
int age2;
cin>>age2;
cout<<"enter name of third brother:";
string n3;
cin>>n3;
cout<<"enter age of third brother:";
int age3;
cin>>age3;
if(age1<age2&&age1<age3)
{cout<<n1 <<" is youngest";
}

if(age2<age3&&age2<age1){
  cout<<n2 << " is youngest";}
  
 if(age2>age3&&age3<age1)
 {cout<<n3 << " is youngest"; 
}
cin.get();
return 0;
}