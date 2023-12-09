#include<iostream>
using namespace std;
int main()
{
    int a, r, rev=0,m;

    cout<<"enter an integer u need to check palindrome for"<<endl;
    cin>>a;
    m=a;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        rev=(rev*10)+r;   
    }

    cout<<"The reverse of the integer entered is "<<rev<<endl;

    if(m==rev)
    {
        cout<<"The enter integer is a palindrome."<<endl;
    }
    else
    {
        cout<<"The entered integer isn't a palindrome."<<endl;
    }
}