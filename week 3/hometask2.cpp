#include<iostream>
using namespace std;
main()
{
cout<<"enter number of minutes:" ;
int mins;
cin>>mins;
cout<<"enter frames per seconds:";
int fps;
cin>>fps;
int frames;
frames=fps*mins*60;
cout<<"total number of frames are : " << frames ;
cin.get();
cin.get();
}
