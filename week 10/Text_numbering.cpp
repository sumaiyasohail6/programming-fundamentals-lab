# include<iostream>
using namespace std;

void numberConverter(int n);
main()
{
    cout<<"Enter a number (1-99): ";
    int num;
    cin>> num;
   numberConverter(num);
}
void numberConverter(int n)
{
     int n1;
    n1 = n / 10;
    string a1;

    int n2;
    n2 = n % 10;
    string a2;

    if(n == 0){ a1 = "Zero"; }
    if(n2 == 1){ a1 = "One"; }
    if(n2 == 2){ a1 = "Two";}
    if(n2 == 3){ a1 = "Three";}
    if(n2 == 4){ a1 = "Four"; }
    if(n2 == 5){ a1 = "Five"; }
    if(n2 == 6){ a1 = "Six";}
    if(n2 == 7){ a1 = "Seven";}
    if(n2 == 8){ a1 = "Eight";} 
    if(n2 == 9){ a1 = "Nine";}
    if(n == 10){ a1 = "Ten";}

    if(n == 11){ a1= "Eleven";}
    if(n == 12){ a1= "Twelve";}
    if(n == 13){ a1= "Thirteen";}
    if(n == 14){ a1= "Fourteen";}
    if(n == 15){ a1= "Fiveteen";}
    if(n == 16){ a1= "Sixteen";}
    if(n == 17){ a1= "Seventeen";}
    if(n == 18){ a1= "Eighteen";}
    if(n == 19){ a1= "Nineteen";}

    if(n1== 2){ a2 = "Twenty";}
    if(n1 == 3){ a2 = "Thirty";}
    if(n1 == 4){ a2 = "Forty"; }
    if(n1 == 5){ a2 = "Fivty"; }
    if(n1 == 6){ a2 = "Sixty";}
    if(n1 == 7){ a2 = "Seventy";}
    if(n1 == 8){ a2 = "Eighty";} 
    if(n1 == 9){ a2 = "Ninety";}

    cout <<a2<<" "<<a1;    
}