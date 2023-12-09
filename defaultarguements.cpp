#include<iostream>
using namespace std;
int add(int x, int y, int z=0)
{
    return x+y+z;
}

int main()
{
    int a,b,c,result;
    cout<<"Enter the value of a,b,c"<<endl;
    cin>>a>>b>>c;
    
    result= add(a,b,c);
    cout<<"The sum of the numbers is "<<result<<endl;
}