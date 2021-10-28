#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, a[100000], b[100000], ai = 0, bi = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n + m; i++) {
    if (((a[ai] < b[bi]) && (ai != n)) || (bi == m)){
      cout << a[ai++] << ' ';
    }
    else {
      cout << b[bi++] << ' ';
    }
  }
  return 0;
}
