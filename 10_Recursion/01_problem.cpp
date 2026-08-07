// Recursion : Function Calling itself.
//1)Repeatation
//2)Infinite Loop.
#include<iostream>
using namespace std;
void greet()
{
    cout<<"Hey"<<endl;
    greet();//Repeatation.

}

int main()
{
    greet();
    return 0;
}
