#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float radius, area;

    cout<<"Enter the radius of the circle."<<endl;
    cin>>radius;

    area=3.14*pow(radius,2);

    cout<<"The area of the circle of radius "<<radius<<"is "<<area<<endl;
}