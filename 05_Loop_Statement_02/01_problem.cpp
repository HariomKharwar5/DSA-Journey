#include<iostream>
using namespace std;
int main()
{
    //continue is a conditional statement that is used to skip the current iteration..
    for(int i = 1;i<=20;i++)
    {
        if(i==5 || i==8) continue;
        {
            cout<<i<<" ";
        }
    }
    return 0;
}