#include<iostream>
using namespace std;
int main()
{
     //Print the absolutwe value of any number.
     int x;
     cout<<"Enter Number:";
     cin>>x;
     if(x>=0)
     {
        cout<<x;     
     }
     else
     {
        cout<<-(x);
     }
    return 0;
}