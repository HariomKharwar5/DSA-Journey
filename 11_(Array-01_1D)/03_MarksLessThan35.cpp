#include<iostream>
using namespace std;
int main()
//Print Index if marks is less than 35........<->.
{
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int arr[n];
    //Taking marks as User Input......
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Printing Output as per the condition.....
    for(int i=0;i<n;i++)
    
    {
        if(arr[i]<35)
        {
         cout<<i<<" ";   
        }
    }

    return 0;
}