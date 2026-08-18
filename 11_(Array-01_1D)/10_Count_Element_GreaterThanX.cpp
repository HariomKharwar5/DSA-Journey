#include<iostream>
using namespace std;
int main()
{
   int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int x;
    int count=0;
    cout<<"Enter the Elements : ";
    int arr[n];
    //Taking Input....
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Element for reference : ";
    cin>>x;
    //Output....
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
        
    }
    cout<<"Total Number greater than X is : "<<count;
    
    return 0;
}