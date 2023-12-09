#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a,b"<<endl;
    cin>>a>>b;

    while(a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }

        else if (b>a)
        {
            b=b-a;
        }
    }

    cout<<b<<" is the gcd of the numbers "<<a<<" and "<<b<<endl;
}