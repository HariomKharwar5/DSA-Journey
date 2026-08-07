// //PRINTING 1 TP n
// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     if(n>100) return;
//     cout<<n<<" ";
//     print(n+1);
    
// }
// int main()
// {
//     int n;
//     cout<<"Enter a Number :"; 
//     cin>>n;

//     print(n);
//     return 0;
// }
//PRINTING 1 TP n
#include<iostream>
using namespace std;
void print(int x ,int n)
{
    if(x>n) return;
    cout<<x<<" ";
    print(x+1,n);
    
}
int main()
{
    int n;
    cout<<"Enter a Number :";
    cin>>n;

    print(1,n);
    return 0;
}

