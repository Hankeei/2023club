#include <bits/stdc++.h>

using namespace std;

void calc(int n) {
    if (n == 1) return;
    int m = n % 2 == 0 ? n / 2 : 3 * n + 1;
    cout << m << endl;
    calc(m);
} 

int main() {
    int n;
    cin >> n;
    cout << n << endl;
    calc(n);
    return 0;
}
