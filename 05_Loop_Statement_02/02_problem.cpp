#include<iostream>
using namespace std;
int main()
{
    //counting from 1 to 100 to get all odd number.
    for(int i=1;i<=100;i++)
    {
        if(i%2==0) continue;
        {
            cout<<i<<" ";
        }
    }
    return 0;
}