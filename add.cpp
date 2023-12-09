#include<iostream>
using namespace std;
int add(int x, int y)
{
    int z;
    z=x+y;
    return z;
}

int main()
{
    int a,b,c;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;

    c=add(a,b);
    cout<<"The sum of a and b is "<<c<<endl;

}