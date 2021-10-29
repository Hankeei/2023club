#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k = 1;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cout << i * i << " ";
    for (int j = 1; j < n; j++) {
      cout << (i * i) + (i * j) << " ";
    }
    cout << endl;
  }
  return 0;
}
