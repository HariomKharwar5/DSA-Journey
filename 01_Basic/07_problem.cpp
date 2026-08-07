#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"Enter the Principle :"<<endl;
    cin>>p;
    cout<<"Enter the Rate :"<<endl;
    cin>>r;
    cout<<"Enter the Time :"<<endl;
    cin>>t;
    si = (p*r*t)/100;
    cout<<"Simple Interest is : "<<si;
    return 0;
}