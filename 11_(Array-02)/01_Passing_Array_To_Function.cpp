#include<iostream>
using namespace std;
//Array is always passes by reference....
void display(int a[] , int n)//int* a;
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void change(int b[],int n)//int* b;
{
    b[0]=15;
}

int main()
{
    int arr[]={1,4,2,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    change(arr,n);
    display(arr,n);
}