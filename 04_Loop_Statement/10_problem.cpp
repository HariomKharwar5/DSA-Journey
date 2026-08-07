#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number :";
    cin>>n;
    bool flag = true;//Prime Number.
    for(int i = 2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag = false;//Composite Number.
            break;
        }
    }
    if(n==1) cout<<"Neither composite nor Prime";
    else if(flag==true) cout<<"Prime Number.";
    else cout<<"Composite Number.";

    return 0;
}