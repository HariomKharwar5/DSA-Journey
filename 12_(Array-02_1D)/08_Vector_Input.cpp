#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //This method is only used when vector size is already declared...
    // vector<int> v(5);
    // for(int i = 0;i<5;i++)
    // {
    //     cin>>v[i];
    // }
    // for(int i = 0;i<5;i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    vector<int> v;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Vector elements are: ";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    for (int x : v)
    {
        cout << x << " ";
    }
}

