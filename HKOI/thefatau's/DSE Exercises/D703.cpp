#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, h, a[10001], b[10001];
  cin >> n >> h;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  while (h != 0) {
    cout << a[h - 1] << endl;
    h = b[h - 1];
  }
  cout << "End" << endl;
  return 0;
}
