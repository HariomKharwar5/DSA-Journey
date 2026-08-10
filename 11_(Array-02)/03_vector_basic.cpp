#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;//need not mention the size.
    //for Inserting / input do not use []
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);

    //if you want to update // access...use []..
    //v[0]=100;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}