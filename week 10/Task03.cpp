# include<iostream>
using namespace std;

float taxCalculator(char type, float price);
main()
{
    cout<<"Enter Vehical Type Code(M/E/S/V/T): ";
    char t;
    cin >> t;
    cout<<"Enter Vehical Price: ";
    float p;
    cin>> p;
    string name;
     if(t == 'M')
    {
        name ="Motorcycle";
    }
    if(t == 'E')
    {
        name = "Electric";
    }
    if(t == 'S')
    {
        name = "Sedan";
    }
    if(t == 'V')
    {
        name = "Van";
    }
    if(t == 'T')
    {
        name = "Truck";
    }
    cout<<"The final price on a vehicle of type "<<name<<" after adding the tax is $"<<taxCalculator(t, p)<<".";

}

float taxCalculator(char type, float price)
{   
    int taxRate;
    if(type == 'M')
    {
      taxRate = 6;
    }
    else if(type == 'E')
    {
      taxRate = 8;
    }
    else if(type == 'S')
    {
      taxRate = 10;
    }
    else if(type == 'V')
    {
      taxRate = 12;
    }
    else if(type == 'T')
    {
      taxRate = 15;
    }

    float taxAmount = price * taxRate/100;
    float finalprice = price + taxAmount;
    return finalprice;
}
