#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;

    cout<<"Enter the value of a,b,c,d,e"<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<fixed<<setprecision(3)<<d<<endl;
    cout<<fixed<<setprecision(9)<<e<<endl;  //use library iomanip for using setprecision and setprecision is used to print fixed number of numbers of digits after decimal

}