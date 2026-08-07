#include<iostream>
using namespace std;
int main()
{
    //A.P
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int a = 4;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        a += 3;
    }
    return 0;
}