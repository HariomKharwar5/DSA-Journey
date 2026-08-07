#include<iostream>
using namespace std;
int main()
{
int a,b;
char op;
cout<<"Enter the 1st Number :";
cin>>a;
cout<<"Enter the Operator :";
cin>>op;
cout<<"Enter the 2nd Number :";
cin>>b;
switch(op)
    {
        case '+': 
        cout<<a+b<<endl;
        break;
    case '-': 
        cout<<a-b<<endl;
        break;
    case '*': 
        cout<<a*b<<endl;
        break;
    case '/': 
        cout<<a/b<<endl;
        break;
    default:
        cout<<"Innvlid Operation";
    
    }
    
}