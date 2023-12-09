//program to calculate sum of first n natural numbers

#include<iostream>
using namespace std;
int main()
{
     int n,sum;

     cout<<"Enter the number till which you want the natural number"<<endl;
     cin>>n;

    sum=n*(n+1)/2;
    cout<<"The sum of first "<<n<<" natural number is "<<sum<<endl;
   

}