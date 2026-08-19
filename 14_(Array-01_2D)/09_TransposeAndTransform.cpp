#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter row and column : ";
    cin>>m;

    int arr[m][m];
  
    cout<<"Enter the Elements : ";
    for(int i = 0; i<m ; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<m ; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
        cout<<endl;
    }

    cout<<endl;
    //Transpose in the same matrix...
    for(int i = 0;i<m;i++)//rows
    {
        for(int j = i + 1 ; j<m ; j++)//col
        {
            //swapping of i and j
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i]=temp;
        }
    }
    //Printing Transpose Matrix...
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}