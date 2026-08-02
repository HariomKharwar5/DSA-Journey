//Recursion :: function call it self.
#include<iostream>
using namespace std;
void fun1(int n)
{
    if(n>0)
    {
        fun1(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    fun1(x);

    return 0;
}