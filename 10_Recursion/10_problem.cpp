// Power Function (Logarithmic)
// Uses exponentiation by squaring (fast exponentiation)
// Time Complexity: O(log n)

#include <iostream>
using namespace std;

// Function to compute x^n using logarithmic time (exponentiation by squaring)
long long powerLogarithmic(int x, int n) {
    // Base case
    if (n == 0) {
        return 1;
    }
    
    long long half = powerLogarithmic(x, n / 2);
    
    // If n is even
    if (n % 2 == 0) {
        return half * half;
    }
    // If n is odd
    else {
        return x * half * half;
    }
}

int main() {
    int x, n;
    
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;
    
    long long result = powerLogarithmic(x, n);
    cout << x << "^" << n << " = " << result << endl;
    
    return 0;
}