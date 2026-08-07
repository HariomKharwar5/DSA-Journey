#include<iostream>
using namespace std;
int main()
{
    int per;
    cout<<"Enter Percentage of the student :";
    cin>>per;
    if(per>80)
    {
        cout<<"Very Good";
    }
    else if(per>60)
    {
        cout<<"Good";
    }
    else if(per>40)
    {
        cout<<"Average";
    }
    else
    {
        cout<<"Fail";
    }
    return 0;
}