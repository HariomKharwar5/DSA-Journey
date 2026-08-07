#include<iostream>
using namespace std;
int main()
{
    int n;
    //Imp...easy but confusing..
    cout<<"Enter the number to get its highest factor :";
    cin>>n;
    for(int i = n/2;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            break;//to get out of the loop immediately......
        }
    }
    return 0;
}