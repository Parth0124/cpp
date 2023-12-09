#include<iostream>
using namespace std;
int main()
{
    int a, sum=0, i;
    cout<<"Enter the number for which u want the perfect number."<<endl;
    cin>>a;

    for (i=1; i<=a; i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
    if (2*a==sum)
    {
        cout<<"It is a perfect number"<<endl;
    }
    else
    {
        cout<<"Not a perfect number"<<endl;
    }

}