#include<iostream>
using namespace std;
int main()
{
    int length = 0, breadth = 0;
    cout<<"Enter the Lenght and Breadth :";
    cin>>length>>breadth;

    int area = length*breadth;
    int perimeter = 2*(length + breadth);
    cout<<"Area = "<<area<<"\n5 Perimeter = "<<perimeter;
    return 0;
}