# include <iostream>
using namespace std;

int calculateBalance(int balance, int years);
main()
{
    float b;
    int y;
    cout<<"Enter balance and years: "<<endl;
    cin>>b;
    cin>>y;
   cout<<"Updated Balance: "<<calculateBalance(b, y);
}
float calculateBalance(float balance, int years)
{   
    float interest;
    if(balance < 10000)
    {
      interest = (0.05* balance) + balance;
    }
    else if(balance >= 10000 || balance <= 50000)
    {
      interest = (0.07* balance) + balance;
    }
    else if(balance > 50000)
    {
      interest = (0.1* balance) + balance;
    }
    if(years >= 3)
    {
        interest = (0.02*balance) + interest;
    }
    return interest;
}