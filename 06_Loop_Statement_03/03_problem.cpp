#include<iostream>
using namespace std;
int main()
{
    //summ of the digit
    int n,ld,sum=0;
    cout<<"Enter the number :";
    cin>>n;
    while(n!=0)
    {
        ld=n%10;
        sum=sum+ld;
        n=n/10;

    }
    cout<<sum;
    return 0;
}