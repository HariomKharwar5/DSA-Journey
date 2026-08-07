#include<iostream>
using namespace std;

void usa()
{
    cout<<"You are in USA"<<endl;
}
void india()
{
    cout<<"You are in India"<<endl;
    usa();
}
int main()//main() cannot be called more than one time
{
    cout<<"Welcome Boss"<<endl;
    india();
    return 0;
}
//Jis function ko call krna hota hai usko upar rakhna hota hai
