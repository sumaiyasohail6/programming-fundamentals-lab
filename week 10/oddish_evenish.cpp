# include<iostream>
using namespace std;

void result(int array[5]);
main()
{
  cout<<"Enter a five-digit number one by one:  ";
  int num[5];
  for(int i =0; i<5; i++){
    cin>> num[i];
  }
  result(num);
}

void result(int array[5])
{
    int sum = 0;
    for(int i =0; i<5; i++){
  sum = sum + array[i];
    }
      if(sum % 2 == 1){
        cout<<"Oddish";
      }
      if(sum % 2 == 0){
        cout <<"Evenish";
      }
}