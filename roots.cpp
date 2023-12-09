//program to find roots of a quadratic expression

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,root1,root2;
    cout<<"enter the values of a,b and c"<<endl;
    cin>>a>>b>>c;
    
    root1=(-b + sqrt(pow(b,2)-4*a*c))/(2*a);
    root2=(-b + sqrt(pow(b,2)-4*a*c))/(2*a);

    cout<<"The roots of the quadratic expression are" <<root1 <<root2<<endl;
}