#include<iostream>
using namespace std;
void print(int *X,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<X[i]<<" ";
    }
}
int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(A)/sizeof(A[0]);
    print(A,n);
    return 0;
}
