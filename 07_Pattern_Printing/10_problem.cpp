#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter Rows :";
    cin>>n;
    // cout<<"Enter Column :";
    // cin>>m;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
        
    return 0;
}