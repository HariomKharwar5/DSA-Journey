#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i,int j,vector<int>& a)
{
    while(i<=j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] =temp;
        i++,j--;
    }
    return;
}
int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    display(v);
    cout<<endl;

    reversePart(0,3,v);
    display(v);

}
