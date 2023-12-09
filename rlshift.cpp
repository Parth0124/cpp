#include<iostream>
using namespace std;
int main()
{
    int y,x,i;

    cout<<"Enter the values of x,i"<<endl;
    cin>>x>>i;

    y=x<<i;
    cout<<"The value of right shift of y is "<<y<<endl;

    int a,b,c;

    cout<<"enter the values of b,c"<<endl;
    cin>>b>>c;

    a=b>>c;
    cout<<"The value of left shift of a is "<<a<<endl;
}