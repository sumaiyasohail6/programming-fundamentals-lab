# include<iostream>
using namespace std;

void calculatePoolStatus (int p1, int p2, float h, float v);
main()
{
    cout<<"Enter Volume of the pool in liters: ";
    int Vol;
    cin>>Vol;
    cout<<"Enter flow rate of first pipe per hour: ";
    int Pipe1;
    cin>>Pipe1;
     cout<<"Enter flow rate of second pipe per hour: ";
    int Pipe2;
    cin>>Pipe2;
    cout<<"Enter hours that the worker is absent: ";
    float hour;
    cin>>hour;
calculatePoolStatus (Pipe1, Pipe2, hour, Vol);

}
void calculatePoolStatus (int p1, int p2, float h, float v)
{
    float totalWater = (p1 + p2) * h;
    if(totalWater <= v)
    {
        float pool = (totalWater/v)*100;
        float pool1 = (p1*h/totalWater)*100;
        float pool2 = (p2*h/totalWater)*100;

        cout<<"The pool is "<<pool<<"% full. Pipe 1: "<<pool1<<"%. Pipe 2: "<<pool2<<"%"<<endl;
    }
    if(totalWater > v)
    {
        float overflow = totalWater - v;
        cout <<"For "<<h<<"  hours the pool overflows with "<<overflow<<" liters."<<endl;
    }
}