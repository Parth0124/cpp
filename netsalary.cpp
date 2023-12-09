#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int basic, net, p_allowances, p_deductions;

    cout<<"Enter the basic salary"<<endl;
    cin>>basic;

    cout<<"Enter the percentage of the allowances given."<<endl;
    cin>>p_allowances;

    cout<<"Enter the percentage of the deductions."<<endl;
    cin>>p_deductions;

    net=basic+basic*p_allowances/100-basic*p_deductions/100;

    cout<<"The net salary is "<<net<<" rupees per annum."<<endl;

}
