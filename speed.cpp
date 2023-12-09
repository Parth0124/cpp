//program to calculate speed of an object

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int v,u,a,speed;

    cout<<"enter the initial velocity(u) and final velocity (v) and acceleration (a)."<<endl;
    cin>>u>>v>>a;

    speed=(pow(v,2)-pow(u,2))/(2*a);

    cout<<"The speed is "<<speed<<endl;
}