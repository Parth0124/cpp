#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the Age"<<endl;
    cin>>age;

    if(age<=0&&age<=3)
    cout<<"It is a baby"<<endl;

    if (age>3 && age <=12)
    cout<<"It is a young child"<<endl;

    if (age>=13&&age<=19)
    cout<<"It is a teenager"<<endl;

    if (age>19&&age<=60)
    cout<<"it is a young man"<<endl;

    if(age>60)
    cout<<"It is a old man"<<endl;
}