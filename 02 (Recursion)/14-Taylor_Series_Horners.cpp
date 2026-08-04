#include<iostream>
using namespace std;
double series(int x,int n)
{
    static double s;
    if(n==0)
    {
        return s;
    }
    else
    {
        s = 1+x*s/n;
    }
    return series(x,n-1);


}
int main()
{
    
    cout<<"Taylor Series is: "<<series(1,10);
    return 0;
}
