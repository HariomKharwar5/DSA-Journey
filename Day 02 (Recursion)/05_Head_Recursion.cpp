#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    fun(n);
    return 0;
}