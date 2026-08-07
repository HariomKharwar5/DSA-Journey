//Pattern Printing...nested Loop.
#include<iostream>
using namespace std;
int main()
{
//Square Printing
    int m;
    cout<<"Enter Rows :";
    cin>>m;
    // cout<<"Enter column :";
    // cin>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"* ";
            
        }
        cout<<endl;
    }
    
    return 0;
}
