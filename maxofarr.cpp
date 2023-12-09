#include<iostream>
using namespace std;
int main()
{
    int A[10]={12,14,15,13,96,87,14,54,85,65};
    int max;

    max=A[0];
    for(int i=1; i<10; i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }

    cout<<"The maximum element of array is "<<max<<endl;
}