#include<iostream>
using namespace std;
int main()
{
    int x = 12;
    int* ptr = &x;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    *ptr = 48;
    cout<<*ptr<<endl;//it's used to update the value .

    return 0;
}
