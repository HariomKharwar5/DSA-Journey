#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            if(max<arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    cout<<"Maximum Elements is : "<<max;
    
}