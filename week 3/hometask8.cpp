#include<iostream>
using namespace std;
main()
{
cout<<"enter vegetable price per kilogram(in coins):";
float vegprice;
cin>>vegprice;
cout<<"enter fruit price per kilogram(in coins):";
float fruitprice;
cin>>fruitprice;
cout<<"enter total kilogram of vegetables:";
int vegkg;
cin>>vegkg;
cout<<"enter total kilograms of fruits:";
int fruitkg;
cin>>fruitkg;
float total;
total=(vegprice*vegkg)+(fruitprice*fruitkg);
float rps;
rps=total/1.94;
cout<<"total earning in rupees(rps): " << rps;
cin.get();
cin.get();
}