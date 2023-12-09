#include<iostream>
using namespace std;

int main()
{
    int m1,m2,m3;
    float avg;

    cout<<"Enter the marks of the student students in all the three subjects."<<endl;
    cin>>m1>>m2>>m3;

    avg=(m1+m2+m3)/3;

    if(avg>=60)
    cout<<"The grade is A"<<endl;

    else if(35<=avg<60)
    cout<<"The grade is B"<<endl;

    else if(avg<35)
    cout<<"The grade is C"<<endl;
}