#include<iostream>
using namespace std;
int main()
{
    int a,r;
    cout<<"Enter the number for which u want th digits to be printed."<<endl;
    cin>>a;

    while (a>0)
    {
        r=a%10;
        a=a/10;
        cout<<r<<endl;
    }
    cout<<"These are the digits of number entered."<<endl;
    return 0;
}