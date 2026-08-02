#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    return fact(n-1)*n;
}
int main()
{
    int f;
    f=fact(5);
    cout<<"Factorial is : "<<f;
    return 0;
}