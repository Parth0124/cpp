#include<iostream>
using namespace std;
int max(int x, int y)
{
    return (x>y)?x:y;
}

int min(int x, int y)
{
    return (y>x)?x:y;
}

int main()
{

    int result;
    int result_1;
    int x,y,a,b;
    int (*f)(int,int);
    f=max;
    cout<<"Enter x and y"<<endl;
    cin>>x>>y;
    result_1=(*f)(x,y);

    cout<<result_1<<endl;

    f=min;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    result=(*f)(a,b);

    cout<<result<<endl;

}