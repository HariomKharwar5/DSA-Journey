#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"Enter the Cost Price :";
    cin>>cp;
    cout<<"Enter the selling Price :";
    cin>>sp;
    if(sp>cp)
    {
        cout<<"Profit :"<<sp-cp;
    }
    else if(cp>sp)
    {
        cout<<"Loss :"<<cp-sp;
    }
    else
    cout<<"Neither Profit nor Loss";

    return 0;
}