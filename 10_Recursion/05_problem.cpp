//print sum from 1 to n (Parametrised).
#include <iostream>
int sumToN(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    std::cout<<"Enter the Number :";
    std::cin >> n;
    std::cout << sumToN(n) << std::endl;
    return 0;
}
