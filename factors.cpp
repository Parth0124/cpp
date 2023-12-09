#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number for which u need the factors."<<endl;
    cin>>a;

    if(a==1 || a==0)
    {
        return a;
    }

    for(int i=1; i<=a; i++)
    {
        if(a%i==0)
        {
            cout<<i<<endl;
        }

        else
        {
            continue;
        }

    }
}