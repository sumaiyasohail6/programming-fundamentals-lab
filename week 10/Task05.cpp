# include<iostream>
using namespace std;

int calculateSalary(int base, int score, int experience);
main()
{
    int b, s, exp;
    cout<<"Enter base, score and experience in years: "<<endl;
    cin>> b;
    cin>>s;
    cin>>exp;
    cout<<"Final salary "<<calculateSalary(b , s, exp);
}
int calculateSalary(int base, int score, int experience)
{ 
    float bonus;
    if(score >= 90)
    {
       bonus = 0.2*base;
    }
    else if(score >= 75 || score <= 89)
    {
       bonus = 0.1* base;
    }
    else{
        bonus = 0.5* base;
    }
    if(experience >= 5)
    {
        bonus = bonus + 0.05;
    }
    int finalSalary = bonus + base;
    return finalSalary;
}