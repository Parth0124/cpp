#include<iostream>
using namespace std;
int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int l=A[0], h=A[9],mid;
    int key;

    cout<<"Enter the number you want to find."<<endl;
    cin>>key;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"element was found at "<<mid<<endl;
            return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else 
        {
            l=mid+1;
        }
    }

    cout<<"The element was not found in the array"<<endl;
}