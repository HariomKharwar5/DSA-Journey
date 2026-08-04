#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int &r = a;
    int b = 30;
    r=b;//and we know that r is also equal to a.
    cout<<a<<" "<<r<<endl;
    

    return 0;
}