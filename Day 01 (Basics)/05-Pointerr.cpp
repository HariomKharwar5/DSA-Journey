#include<iostream>
using namespace std;
int main()
{
    int A[]={1,2,3,4,5};
    int *p;
    p=A;//p=&A[0]
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}