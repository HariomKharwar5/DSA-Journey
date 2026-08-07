#include<iostream>
using namespace std;
int sum(int a,int b)//here a,b is formal parameter.
{
    return a+b;
}

int main()
{
    int a,b;
    cout<<"Enter 1st Number :";
    cin>>a;
    cout<<"Enter 2nd Number :";
    cin>>b;
    cout<<sum(a,b);//here a,b is actual parameter.
    return 0;//in cpp its always optional
}
