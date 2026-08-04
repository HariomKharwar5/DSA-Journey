#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;

};

int main()
{
    struct Rectangle r;
    {
        r.length=10;
        r.breadth=15;
       cout<<"Area Of Rectangle is :"<<r.length*r.breadth; 
    };
    

    return 0;
}