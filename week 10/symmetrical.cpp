# include<iostream>
using namespace std;

bool symmetrical(string a);
main()
{
  cout<<"Enter three-digit number: "<<endl;
 string num;
 cin>> num;

  if(symmetrical(num)){
    cout<<"Symmetrical";
  }
  else{
    cout<<"Unsymmetrical";
  }
}
bool symmetrical(string a)
{
    bool status = false;
    if(a[0] == a[2])
    {
        status = true;
    }
    return status;
}