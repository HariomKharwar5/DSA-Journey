#include<iostream>
using namespace std;
int main()
{
    // roll number, marks..
    // 4 Student.
    int arr[2][4];
    cout<<"Enter the roll and marks of 4 std : ";
    for(int i = 0; i<2 ; i++)
    {
        for(int j = 0; j<4 ; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for(int i = 0; i<2 ; i++)
    {
        for(int j = 0; j<4 ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }


    return 0;
}