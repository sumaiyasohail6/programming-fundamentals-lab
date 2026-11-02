#include <iostream>
#include <cmath>
using namespace std;
double findHeight(float distance, float angle);
double height;
int main()
{
    float distance, angle;
    cout << "Enter distance from base if tree(in feet):";
    cin >> distance;
    cout << "Enter angle of elevation: ";
    cin >> angle;
    findHeight(distance, angle);
    cout <<height;
}

double findHeight(float distance, float angle)
{
    height = distance * tan(angle / 57.2958);
}