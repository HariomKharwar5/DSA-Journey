#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter Number :";
    cin>>x;
    if(x%5==0)
    {
        cout<<"Number is Divisible by 5";
    }
    else
    {
        cout<<"NUmber is not divisible by 5";
    }
    return 0;
}