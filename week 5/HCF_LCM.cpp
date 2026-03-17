#include <iostream>
using namespace std;
int main()
{
  int hcf, lcm, num1, num2;
  cout << "enter first number:";
  int a;
  cin >> num1;
  cout << "enter second number:";
  int b;
  cin >> num2;
  for (int i = 1; i <= num1 && i <= num2; i++)
  {
    if (num1 % i == 0 && num2 % i == 0)
    {
      hcf = i;
    }
  }

  lcm = (num1 * num2) / hcf;
  cout << "LCM is " << lcm << endl;
  cout << "HCF is " << hcf;

  cin.get();
  return 0;
}
