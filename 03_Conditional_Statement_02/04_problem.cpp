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
    if(a>b && a>c)
    {
        cout<<"a is biggest one";
    }
    else if(b>a && b>c)
    {
        cout<<"b is biggest one";
    }
    else
    {
        cout<<"c is biggest one";
    }

    return 0;
}