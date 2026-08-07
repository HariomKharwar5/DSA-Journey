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
    if(a+b>c && b+c>a && a+c>b)
    {
        cout<<"Valid Triangle ";
    }
    else
    {
        cout<<"Invalid Triangle ";
    }
    return 0;
}