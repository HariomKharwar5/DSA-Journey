#include<iostream>
using namespace std;
int main()
{
   int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int x;
    cout<<"Enter the Elements : ";
    int arr[n];
    //Taking Input....
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Element to Search : ";
    cin>>x;
    //Output....
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"Element is present at idx : "<<i;
        }
        
    }
    cout<<"Invalid Number Entered.";
    
    return 0;
}