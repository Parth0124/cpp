#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int [5];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>p[i];
    }
    cout<<"The second element of the array is "<<p[1]<<endl;
}
