#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    // at - operator...
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    //sort -operator.....
    sort(v.begin(),v.end());//it usually uses quick sort...
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }

    return 0;
}