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

    cout << "Wave Elements are: " << endl;

    for(int i = 0; i < m; i++)
    {
        if(i % 2 == 0)
        {
            // Left to Right
            for(int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            // Right to Left
            for(int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}