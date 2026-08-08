#include<iostream>
#include<climits>
using namespace std;
int main()
{
   int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    cout<<"Enter the Elements : ";
    int arr[n];
    //Taking Input....
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // int max = arr[0];
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
      if(max<arr[i])
      {
        max = arr[i];
      }  
        
    }
    cout<<"Maximum Element is : "<<max;
    
    return 0;
}