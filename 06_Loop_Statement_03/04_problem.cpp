#include<iostream>
using namespace std;
int main()
{
    int n,product=1,ld;
    cout<<"Product of the Number :";
    cin>>n;
    while(n!=0)
    {
        ld=n%10;
        product=product*ld;
        n=n/10;
    }
    cout<<"Product of the digit is ="<<product;

    return 0;
}