//swap 2 Number...
//Pass by Value & (Pass by reference).
#include<iostream>
using namespace std;

void swap(int& x,int& y)
{
    int temp=x;
    x = y;
    y = temp;
    cout<<x<<" ";
    cout<<y<<" "<<endl;
    //x=x+y
    //y=x-y
    //x=x-y

}


int main()
{
    int x,y;
    cout<<"Enter x :";
    cin>>x;
    cout<<"Enter y :";
    cin>>y;
    cout<<x<<" ";
    cout<<y<<" "<<endl;
    swap(x,y);
    
    return 0;
}