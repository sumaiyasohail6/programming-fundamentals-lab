#include<iostream>
using namespace std;
int main()
{cout<<"enter speed:";
int sp;
cin>>sp;
if(sp<=10)
{cout<<"slow"<< endl;}
else if(sp<=50)
{cout<<"average"<<endl;
}
else if(sp<=150)
{cout<<"fast"<<endl;}
else if(sp<=1000)
{cout<<"ultra fast"<<endl;}
else{ 
 cout<<"extremely fast"<<endl;   
}    


cin.get();
return 0;    
}