// program to reverse the digit
#include<iostream>
using namespace std;
int main()
{
    int n,ld,reverse=0;
    cout<<"Enter the number to reverse :";
    cin>>n;
    while(n!=0)
    {
        ld=n%10;
        reverse=reverse*10 + ld;
        n = n/10;
    }
    cout<<"Reverse of Number is : "<<reverse;
    return 0;
}