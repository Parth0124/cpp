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
/*The call by value function does not print the values of a and b after swapping as call by value function does not play with the original
or the actual variable but only the formal variables which are declared inside of the user defined function and also call by value function
type is not well suited for operations like swap and u need to use other types of functions may it be call by address or call by reference 
and also call by value function should be used where the user defined function is actually returning a value while as here in the case of 
swapping the user defined funciton is returning nothing and just swapping the value.*/