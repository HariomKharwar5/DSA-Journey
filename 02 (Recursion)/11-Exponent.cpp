#include<iostream>
using namespace std;
int exp(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    return exp(m,n-1)*m;
}
int main()
{   
    int e;
    e = exp(2,9);
    cout<<"Exponent is : "<<e;
    return 0;
}