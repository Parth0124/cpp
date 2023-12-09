#include<iostream>
using namespace std;
int main()
{
    int A[3][3];
    float avg, sum=0, count=0;
    cout<<"Enter the elements of the array."<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>A[i][j];
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum += A[i][j];
            count++;
        }
    }

    avg= sum/count;

    cout<<"The average of elements of the matrix is "<<avg<<endl;

    return 0;

}