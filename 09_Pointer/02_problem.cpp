#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    int* p;//it is a datatype that store the address of the variable.
    p = &x;
    cout<<p<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;
    cout<<x<<endl;
    return 0;
}