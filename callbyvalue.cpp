#include<iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    a=temp;
    a=b;
    temp=b;
}

int main()
{
    int a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}