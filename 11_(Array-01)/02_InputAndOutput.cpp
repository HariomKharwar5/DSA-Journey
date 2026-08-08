#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int arr[n];
    //Taking Input....
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Printing Output.....
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}