#include<iostream>
using namespace std;
int main()
{cout<<"holidays:";
 int h;
 cin>>h;
 int workdays=365-h;
int time=(workdays*63)+(h*127);
int diff=30000-time;
if(diff<0){ 
diff=-1*diff;    
}
int hour=diff/60;
int min=diff%60;
if(diff>=0)
{cout<<"tom sleeps well\n";
cout<<hour<< "hours and" <<min << "minutes less for play";
}
else{ 
cout<<"tom will run away\n";
cout<<hour <<"hours and" << min << " minutes to play";
} 

cin.get();
return 0;
}