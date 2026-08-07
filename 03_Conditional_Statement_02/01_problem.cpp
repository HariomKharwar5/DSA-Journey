#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    if(n>=100 && n<=999)
    {
        cout<<"Enter digit is three digit Number ";
    }
    else
    {
        cout<<"Enter digit is not three digit number";
    }
    return 0;
}