#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, m, m1 = 32767, ans = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> m;
    m1 = (abs(m1 - k) < abs(m - k)) ? m1 : m;
  }
  cout << m1;
  return 0;
}
