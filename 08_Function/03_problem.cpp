#include<iostream>
using namespace std;
void sum(int a,int b)//here a,b is formal parameter.
{
    cout<<"Sum is :"<<a+b;
}

int main()
{
    int a,b;
    cout<<"Enter 1st Number :";
    cin>>a;
    cout<<"Enter 2nd Number :";
    cin>>b;
    sum(a,b);//here a,b is actual parameter.
    return 0;
}
