#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> v(3,vector<int> (4,2));//here 3 is row and 4 is col and 2 is each elements in the vectots
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Rows : "<<v.size()<<endl; //-->>3
    cout<<"Columns : "<<v[0].size(); //-->>4

    return 0;
}