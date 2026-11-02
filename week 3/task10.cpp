#include<iostream>
using namespace std;
main()
{
cout<<"enter number of wins:" ;
int wins;
cin>>wins;
cout<<"enter number of draws:";
int draws;
cin>>draws;
cout<<"enter number of loses:";
int loses;
cin>>loses;
int points;
points=(wins*3)+(draws*1)+(loses*0);
cout<<"Pakistan has obtained" << points << " points in Asia Cup ";
cin.get();
cin.get();
}
