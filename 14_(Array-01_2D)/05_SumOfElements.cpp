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
    int sum = 0;
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            sum += arr[i][j];
        }
    }
    cout<<"Sum of the Elements is : "<<sum;
    return 0;
}