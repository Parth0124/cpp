#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter three numbers."<<endl;
    cin>>a>>b>>c;

    if(a>b && a>c)
    cout<<"A is the maximum of the three numbers"<<endl;

    else if (b>c)
    cout<<"B is the maximum number of the three numbers"<<endl;

    else 
    cout<<"C is the maximum number of the three numbers"<<endl;
}