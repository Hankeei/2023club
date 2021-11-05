#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k = 1;
  cin >> n;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << k++ << " ";
    }
    cout << endl;
  }
  for (int i = n; i > 0; i--) {
    for (int j = i; j > 0; j--) {
      cout << k++ << " ";
    }
    cout << endl;
  }
  return 0;
}
