#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number for which you want the multiplication table for."<<endl;
    cin>>n;

    for(int i=1; i<=20; i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i;
        cout<<endl;
    }

    return 0;
}