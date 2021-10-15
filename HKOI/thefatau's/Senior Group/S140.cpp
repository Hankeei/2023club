#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, dn = 1;
  cin >> n;
  int ans[n][n];
  for (int i = n - 1; i >= 0; i--) {
    for (int j = n - 1; j >= 0; j--) {
      ans[i][j] = dn;
      dn += (n - i);
    }
    dn += 1;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
