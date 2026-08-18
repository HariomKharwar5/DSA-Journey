#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter row : ";
    cin>>n;

    cout<<"Enter column : ";
    cin>>m;

    int arr[n][m];
  
    cout<<"Enter the Elements : ";
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
        cout<<endl;
    }

    cout<<endl;
    //Storage Transpose....
    int t[m][n];
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            t[i][j] = arr[j][i];
        }
    }
    //Printing Transpose Matrix...
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}