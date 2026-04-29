# include<iostream>
#include <string>
using namespace std;

double volumeOfPryramid (int l , int w, float h, string u);
main()
{
cout<<"Enter length :";
   int len;
   cin>>len;
cout<<"Enter width :";
   int wid;
   cin>>wid;
cout<<"Enter height :";
   float hei;
   cin>>hei;
cout <<"Enter units: ";
string unit;
cin>> unit;
cout<<volumeOfPryramid (len, wid, hei, unit)<<" cubic "<<unit;
}

double volumeOfPryramid (int l , int w, float h, string u)
{   double answer;
    double volume = (l*w*h)/3.0;
    if(u == "centimeters"){
       answer = volume * 100* 100* 100; 
    }
    else if(u == "kilometers")
    {
        answer = volume/(1000*1000*1000);
    }
    else if(u == "millimeters")
    {
        answer = volume * 1000* 1000 * 1000;
    }
    else{
        answer = volume;
    }
    return answer;
}