#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;

    cout<<"Enter the number till which u want to print the sum of natual numbers."<<endl;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of first "<<n<<" natural numbers is "<<sum<<endl;
    return 0;
}