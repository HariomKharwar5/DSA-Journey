#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 3, 2, 4, 3, 4, 1, 6};

    int x = 1;

    // Traverse from the last index to the first
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            cout << "Last occurrence of " << x << " is at index: " << i;
            return 0;
        }
    }

    cout << "Element not found.";

    return 0;
}