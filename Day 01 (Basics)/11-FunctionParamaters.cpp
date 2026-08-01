#include<iostream>
using namespace std;

//Call by value : in this method actual parameters remains uneffected.
// void add(int a,int b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
    
// }
// int main()
// {
//     int x,y;
//     x = 10;
//     y = 5;
//     add(x,y);
//     cout<<x<<" "<<y;
//     return 0;
// }

//Call by Address.
// void add(int *a,int *b)
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
    
// }
// int main()
// {
//     int x,y;
//     x = 10;
//     y = 5;
//     add(&x,&y);
//     cout<<x<<" "<<y;
//     return 0;
// }
//Call by Reference.
void add(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}
int main()
{
    int x,y;
    x = 10;
    y = 5;
    add(x,y);
    cout<<x<<" "<<y;
    return 0;
}
