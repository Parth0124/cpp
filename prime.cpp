#include<iostream>
using namespace std;
int main()
{
    int a, count=0;
    cout<<"Enter the number for which u want to check prime or not."<<endl;
    cin>>a;

    for(int i=1; i<=a; i++) //previously declared the value of i as 0 thus gave floating point exception.
                            //floating point exception is basically an error given by the compiler when a variable is divided by zero.
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"The entered number is prime."<<endl;
    }
    else
    {
        cout<<"The entered number isn't prime."<<endl;
    }
}