#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k = 1;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << k << " ";
    for (int j = 0; j < n - 1; j++) {
      k += 4;
      cout << k << " ";
    }
    cout << endl;
  }
  return 0;
}
