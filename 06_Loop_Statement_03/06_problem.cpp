#include<iostream>
using namespace std;
int main()
{
    int fact=1,n;
    cout<<"Enter the Number to get Factorial :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    cout<<"The factorial of the Number is : n"<<fact;
    return 0;
}
