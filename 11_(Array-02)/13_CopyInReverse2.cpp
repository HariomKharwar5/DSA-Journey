#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    display(v);
    //Reverse... reverse(v.begin(),v.end());
    // int i = 0;
    // int j = v.size()-1;
    // while(i<=j)
    // {
    //     int temp;
    //     //swap v[i] and v[j]
    //     temp = v[i];
    //     v[i] = v[j];
    //     v[j] =temp;
    //     i++;
    //     j--;
    // }
    for(int i = 0,j=v.size()-1;i<=j;i++,j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] =temp;
    }
    display(v);
}
