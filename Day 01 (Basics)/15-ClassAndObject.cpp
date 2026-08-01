#include<iostream>
using namespace std;
class Rectangle 
{
    public:
    int length;
    int breadth;


void initialise(int l,int b)
{
    length=l;
    breadth=b;
}
int area()
{
    return length*breadth;
}
int perimeter()
{
    int p;
    p=2*(length+breadth);
    return p;
    

}

};
 int main()
{
    Rectangle r;
    int l,b;
    cout<<"Enter Length and Breadth :";
    cin>>l>>b;
    r.initialise(l,b);
    int a = r.area();
    int peri = r.perimeter();
    cout<<"Area : "<<a<<"\nPerimeter : "<<peri;
    return 0;
}