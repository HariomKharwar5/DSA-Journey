#include<iostream>
using namespace std;
int Pascal(int n,int r)
{
    if(r==0 || n==r)
        return 1;
    else
    return Pascal(n-1,r-1) + Pascal(n-1,r);
}
int main()
{
    cout<<Pascal(2,1);

    return 0;
}