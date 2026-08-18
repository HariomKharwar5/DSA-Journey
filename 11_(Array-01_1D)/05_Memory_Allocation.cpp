#include<iostream>
using namespace std;
int main()
{
    //the address of array is same as the address of 1st element......
    int arr[5];
    cout<<&arr<<endl;//is same as cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    return 0;
}
