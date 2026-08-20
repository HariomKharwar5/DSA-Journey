#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter row: ";
    cin >> m;

    cout << "Enter column: ";
    cin >> n;

    int arr[m][n];

    cout << "Enter the Elements: ";

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Column Elements are: " << endl;

    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cout<<arr[i][j]<<" ";
        }  
        cout<<endl; 
    }

    return 0;
}