#include<iostream>
using namespace std;
int main()
{
   int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int sum=0;
    cout<<"Enter the Elements : ";
    int arr[n];
    //Taking Input....
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Printing Sum.....
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Total Sum is : "<<sum; 
    return 0;
}