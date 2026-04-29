#include<iostream>
using namespace std;

void checkAlphabetCase (char a);
main()
{
  cout <<"Enter a charater (A/a): "<<endl;
  char x;
  cin >> x;
checkAlphabetCase (x);
}
void checkAlphabetCase (char a)
{
    int b = int(a) ;
    if(b >= 65 && b <= 90){
        cout <<"You have entered capital "<<a;
        if(b >= 97 && b <= 122){
            cout<<"You have entered small "<<a;
        }
    } 
}