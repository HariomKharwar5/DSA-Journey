
 //functions...
//to tackle repitition
//there are certain piece of code that we repeat .
#include<iostream>
using namespace std;
void india()
{
    cout<<"You are in India"<<endl;
    
}
void usa(){
    
    cout<<"You are in USA"<<endl;
    
}
int main()//main() cannot be called more than one time
{
    cout<<"Welcome Boss"<<endl;
    india();
    usa();

    return 0;//End of the function...In cpp it need not to write bcz,it detect automatically
}