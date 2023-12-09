#include<iostream>
using namespace std;
int main()
{
    int a, rev=0, r;
    cout<<"Enter the number which u want reversed."<<endl;
    cin>>a;

    while(a>0)
    {
        r=a%10;
        a=a/10;
        rev=rev*10+r;
    }

    cout<<"The reversed number is "<<rev<<endl;

    return 0;

}