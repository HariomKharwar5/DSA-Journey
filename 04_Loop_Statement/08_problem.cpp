#include<iostream>
using namespace std;
int main()
{
    //Printing G.P........
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        a*=2;
    }
    return 0;
}