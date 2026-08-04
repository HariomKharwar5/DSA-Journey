#include<iostream>
using namespace std;

int main()
{
    int *p = new int[5];
    int *q = new int[10];

    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    cout << "Original Array : ";
    for(int i=0;i<5;i++)
        cout << p[i] << " ";

    // Copy elements
    for(int i=0;i<5;i++)
        q[i] = p[i];

    // Initialize remaining elements
    for(int i=5;i<10;i++)
        q[i] = 0;

    delete[] p;
    p = q;
    q = NULL;

    cout << "\nIncreased Array : ";
    for(int i=0;i<10;i++)
        cout << p[i] << " ";

    delete[] p;

    return 0;
}
