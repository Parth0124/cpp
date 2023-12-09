#include<iostream>
using namespace std;

int linearsearch(int arr[], int size, int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        return i;
    }
    return -1;
}

int main()
{
    int key;
    int result;
    int A[10];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>A[i];
    }

    cout<<"Enter the element for to be searched."<<endl;
    cin>>key;

    result=linearsearch(A, 10, key);

    if (result!=-1)
    cout<<"The element was found at "<<result<<endl;
    else
    cout<<"The element was not found in the array"<<endl;

    return 0;
}