#include<iostream>
using namespace std;
int main()
{
    int area,perimeter,l,b;
    cout<<"Enter the Lenght :";
    cin>>l;
    cout<<"Enter the breadth :";
    cin>>b;
    area = l * b;
    cout<<"Area of Rectangle is : "<<area<<endl;
    perimeter = 2*(l + b);
    cout<<"Perimeter of Rectangle is : "<<perimeter<<endl;
    if(area>perimeter)
    {
        cout<<"Area is Greater than Perimeter ";
    }
    else
    {
        cout<<"Area of rectangle is not greater then perimeter ";
    }

    return 0;
}
