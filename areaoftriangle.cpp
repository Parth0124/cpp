// program to calculate the area of a triangle.
#include<iostream>
using namespace std;
int main()
{
    float height,breadth;
    float area;

    cout<<"Enter the values of breadth and height"<<endl;
    cin>>height>>breadth;

    area=(height*breadth)/2;

    cout<<"area of the triangle is "<<area<<endl;
}