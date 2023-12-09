#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,5};
    int *p=A;
    int *q=&A[3];
    int d;

    cout<<*p<<endl;

    //increament op on pointer p
    p++;
    cout<<*p<<endl;

    //decreament operator on pointer p
    p--;
    cout<<*p<<endl;

    //shifting of pointer p forward by certain position.
    p=p+4;
    cout<<*p<<endl;

    //shifting the pointer p backward by certain position
    p=p-4;
    cout<<*p<<endl;

    //difference between two pointers p and q
    d=p-q;
    cout<<d<<endl;//diff is -3. negative result means the second pointer is far away and the first one is closer.
    
    d=q-p;
    cout<<d<<endl; //diff is 3. positive result means the first pointer is far away and second one is closer.

}