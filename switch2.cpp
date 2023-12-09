#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int operation,a,b,c;

    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;

    cout<<"Menu"<<endl;
    cout<<"1. Addition\n"<<"2. Subtraction\n"<<"3. Multiplication\n"<<"4. Division\n"<<endl;

    cout<<"Enter your choice"<<endl;
    cin>>operation;

    switch(operation)
    {
        case 1: c=a+b;
        break;

        case 2: c=a-b;
        break;

        case 3: c=a*b;
        break;

        case 4: c=a/b;
        break;

        default: cout<<"Choose a valid option.";
    }

    cout<<"The value of c is "<<c<<endl;
}