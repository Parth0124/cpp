#include<iostream>
using namespace std;
int main()
{
    int x=10; 
    int p_value=200;
    int *p;  //you can't name a variable wiht the same thing that u used for a pointer.
    
    p=&x;

    cout<<x<<endl;
    cout<<p_value<<endl;
    cout<<&x<<endl;
    cout<<&p_value<<endl;
    cout<<*p<<endl;
}