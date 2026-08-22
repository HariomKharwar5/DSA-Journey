#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the Size of Array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the Elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the Element to Search: ";
    cin >> x;

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            cout << "Element is present at idx: " << i << endl;
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Invalid Number Entered.";
    }

    return 0;
}