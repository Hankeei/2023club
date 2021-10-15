#include <iostream>

using namespace std;

int getFibonacci(int n) {
    if (n < 2) return n;
    return getFibonacci(n - 1) + getFibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << getFibonacci(n);
    return 0;
}