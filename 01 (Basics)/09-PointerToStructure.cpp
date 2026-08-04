#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;

};

int main()
{
    struct Rectangle *p;
    {
        p = new Rectangle;
        p->length=10;
        p->breadth=15;
       cout<<"Area Of Rectangle is :"<<p->length*p->breadth; 
    };
    

    return 0;
}