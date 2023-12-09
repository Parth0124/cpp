#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,r,sum=0,m;
    cout<<"Enter the number for which u need to check whether it is an armstrong number or not."<<endl;
    cin>>a;
    m=a;    //we used m and n both to represent a single variable so that we can store the value of a into m and then can compare it to the sum of the cubes.

    while(a>0)
    {
        r=a%10;
        sum=sum+pow(r,3);
        a=a/10;
        
    }

    if(sum==m)
    {
        cout<<m<<" is an armstrong number."<<endl;
    }

    else
    {
        cout<<m<<" is not an armstrong number."<<endl;
    }
    return 0;
}