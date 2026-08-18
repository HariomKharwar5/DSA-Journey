#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int* ptr=arr; //&arr[0]; ::Giving the Address of the first elements
    ptr[0]=9;//by dereference --> *ptr=9
    for(int i=0;i<7;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
}
