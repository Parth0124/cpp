#include<iostream>
using namespace std;
int main()
{
    float discount, total, netpayable;

    cout<<"Enter the total amount"<<endl;
    cin>>total;

    if(total<100)
    {
        cout<<"No discount is applicable"<<endl;
    }

    else if(total>=100 && total<500)
    {
        cout<<"Discount applicable is 10%"<<endl;
        discount=10*total/100;
        cout<<"The discount applicable is "<<discount<<" rupees."<<endl;
    }

    else if(total>=500)
    {
        cout<<"The discount applicable is 20%"<<endl;
        discount=20*total/100;
        cout<<"The discount applicable is "<<discount<<" rupees."<<endl;
    }

    netpayable=total-discount;

    cout<<"The amount to be paid is "<<netpayable<<" rupees"<<endl;

    return 0;
}