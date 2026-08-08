 //PRINTING 10 TP 1
#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0) return;
    cout<<n<<" " ;//work
    print(n-1);// Call
    
}
int main()
{
    int n;
    cout<<"Enter a Number :";
    cin>>n;

    print(n);
    return 0;
}
