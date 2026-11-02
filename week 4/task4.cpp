#include<iostream>
using namespace std;
int main()
{
cout<<"enter password:";
string user;
cin>>user;
string my_password = "1234abc";
if(user==my_password)
{ cout<<"Wow! you have cracked the code";
}
else 
{cout<<"it is not that simple,try again";
}
cin.get();
return 0;
}
