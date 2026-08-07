//Pattern Printing...nested Loop.
#include<iostream>
using namespace std;
int main()
{
//Rectangle Printing;
    int n,m;
    cout<<"Enter Rows :";
    cin>>m;
    cout<<"Enter column :";
    cin>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<" *";

        }
        cout<<endl;
        
    }
    
    return 0;
}
