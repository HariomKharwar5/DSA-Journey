#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Array Size :";
    cin>>n;
    int A[n];
    A[0]=5;
    for(int x:A)
    {
        cout<<x<<" ";
    }

    return 0;
}