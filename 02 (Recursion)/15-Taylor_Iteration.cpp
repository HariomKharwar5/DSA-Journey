#include <iostream>
using namespace std;

double series(int x, int n)
{
    double s = 1;
    double num = 1;
    double den = 1;

    for (int i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }

    return s;
}

int main()
{
    cout << "Taylor Series is: " << series(1, 10);
    return 0;
}