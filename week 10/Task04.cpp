# include<iostream>
using namespace std;

void projectTimeCalculation(int hours, int days, int workers);
main()
{
    cout<<"Enter needed hours: "<<endl;
    int h;
    cin>>h;
    cout<<"Enter number of days of firm: "<<endl;
    int d;
    cin>>d;
    cout<<"Enter number of workers: "<<endl;
    int w;
    cin>>w;
    projectTimeCalculation(h, d, w);
}
void projectTimeCalculation(int hours, int days, int workers)
{
    float workingdays = days * 0.9;
    float totalHours = workingdays * 10 * workers;
    if(totalHours >= hours)
    {
        cout<<"Yes!" <<totalHours - hours<<" hours left";
    }
    else{
        cout<<"Not enough time! "<<hours - totalHours<<" hours needed"; 
    }
}