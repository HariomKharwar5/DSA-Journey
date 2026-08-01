#include<iostream>
using namespace std;
int main()
{
    // int A[5];
    // A[0]=1;
    // A[1]=2;
    // A[2]=1;
    // A[3]=2;
    // A[4]=1;
    // cout<<sizeof(A)<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<A[i]<<endl;
    // }
    int A[]={2,4,6,8,10,12,14};
    // for(int i=0;i<7;i++)
    //  {
    //      cout<<A[i]<<endl;
    //  }
    for(int x:A)
    {
        cout<<x<<" ";
    }

    return 0;
}