#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,5};
    int *p;
    p=new int[5];

    cout<<A[3]<<endl;

    cout<<"Enter the value for the 3rd position of heap memory array"<<endl;
    cin>>p[2];

    cout<<p[2]<<endl;

    delete []p;
    p=nullptr;

    return 0;
}