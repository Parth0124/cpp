#include<iostream>
using namespace std;
int main()
{
    int A[10];
    int key, i;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the element u need to find."<<endl;
    cin>>key;

    for( i=0; i<10; i++)
    {
        if(key==A[i])
        {
            cout<<"The desired element is found at "<<i<<endl;
            break;
        }
    }
    if(key != A[i])
    cout<<"The element was not found in the array"<<endl;
}