#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  bool arr[10000001];
  for (int i = 2; i <= sqrt(n); i++) {
    if (!arr[i]) {
      for (int j = i * i; j <= n; j += i) {
        arr[j] = true;
      }
    }
  }
  for (int i = 2; i <= n; i++) {
    if (!arr[i]) {
      cout << i << endl;
    }
  }
  return 0;
}
