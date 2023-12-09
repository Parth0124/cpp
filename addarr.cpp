#include<iostream>
using namespace std;
int main()
{
    int A[10]={54,85,41,23,87,2,4,98,65,69};
    int sum=0;
    for(int i=0; i<10; i++)
    {
        sum=sum+A[i];
    }
    cout<<"The sum of all elements of an array is "<<sum<<endl;
}