//PRINTING 1 TP 10.
#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0) return;//base call.
    print(n-1);//call.
    cout<<n<<" ";//work.
    
}
int main()
{
    int n;
    cout<<"Enter a Number :";
    cin>>n;

    print(n);
    return 0;
}
