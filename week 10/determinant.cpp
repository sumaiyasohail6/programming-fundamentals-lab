#include<iostream>
#include<cmath>
using namespace std;
float findDeterminant(float a,float b,float c);
double determinant;
float root1,root2;
int main()
{
    float a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;
   findDeterminant(a,b,c);
}


float findDeterminant(float a,float b,float c)
{
determinant=(b*b)-4*a*c;
if(determinant>0)
{
    root1=(-b+ sqrt(b*b-4*a*c))/2*a;
    root2=(-b- sqrt(b*b-4*a*c))/2*a;

}
else if(determinant=0)
{
    root1=root2=-b/2*a;
}
else 
{
cout<<"complex roots";
}
}