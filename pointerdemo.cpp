#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p;
    p=new int[5]; //here while allocating memory for heap we need to use new. if we didn't use new it will give an error and also we can't just store an array in pointer. first we need to declare the array then point a pointer.i.e. p=new int[] will work but p=int[] won't work.

    cout<<"Enter the element for array in heap"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>p[i];
    }
    cout<<*p<<endl;
    

    p++;
    cout<<*p<<endl;

    delete  []p;
    p=nullptr;

    return 0;
    
}
