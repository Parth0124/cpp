#include<iostream>
using namespace std;
int main()
{
    int A[2][3];
    int B[2][3];
    int C[2][3];

    cout<<"Enter the elements for first array A"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Enter the elements for second array B"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>B[i][j];
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    cout<<"The sum of all the elemnts of first and second array is"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<C[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            C[i][j]=A[i][j]-B[i][j];
        }
    }

    cout<<"The difference of the first and second array is"<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<C[i][j];
        }
        cout<<endl;
    }
}