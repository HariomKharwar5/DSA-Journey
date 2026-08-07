#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter side a :";
    cin>>a;
    cout<<"Enter side b :";
    cin>>b;
    cout<<"Enter side c :";
    cin>>c;
    if(a>b)
    {
        if(a>c){
            cout<<"a is largest. ";
        }
        else
        {
            cout<<"c is largest. ";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<" b is largest. ";
        }
        else
        {
            cout<<"c is largest. ";
        }
    }
    
    
    return 0;
}