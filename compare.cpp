#include<iostream>
using namespace std;

int main()
{
    int x,y;

    cout<<"Enter the values of x and y"<<endl;
    cin>>x>>y;

    if(x>y)
    cout<<"Maximum of two numbers is x"<<endl;

    else if (x<y)
    cout<<"The maximum of the two numbers is Y"<<endl;

    else
    cout<<"The two numbers are equal"<<endl;

}