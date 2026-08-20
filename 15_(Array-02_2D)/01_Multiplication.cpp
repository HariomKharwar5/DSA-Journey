#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the rows of 1st Matrix : ";
    cin>>m;
    int n;
    cout<<"Enter the col of 1st Matrix : ";
    cin>>n;

    int p;
    cout<<"Enter the rows of 2nd Matrix : ";
    cin>>p;
    int q;
    cout<<"Enter the col of 1st Matrix : ";
    cin>>q;
    if(n==p)
    {
        int a[m][n];
        cout<<"Enter the Elements of the 1st Matrix : ";
        for(int i = 0; i<m ; i++)
            {
                for(int j = 0; j<n ; j++)
                {
                    cin>>a[i][j];
                }
            } 
        int b[p][q];
        cout<<"Enter the Elements of the 2nd Matrix : ";
        for(int i = 0; i<p ; i++)
            {
                for(int j = 0; j<q ; j++)
                {
                    cin>>b[i][j];
                }
            } 
        // resultant Matrix...
        int res[m][q];
        for(int i = 0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                res[i][j] = 0;
                //res[i][j] = a[i][0]*b[0][j]+a[i][1]*b[1][j]+....;
                for(int k=0;k<p;k++)
                {
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        //print.
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Matrix multiplication is not possible... ";
    }
    return 0;
}