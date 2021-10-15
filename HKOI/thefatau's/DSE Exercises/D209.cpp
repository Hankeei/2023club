#include <bits/stdc++.h>
using namespace std;
int main() {
  int a , i;
  cin >> a;
  int b[a];
  bool yes = true;
  while (cin >> b[i]) {
    i++;
  }
  for (i = 0; i <= a - 1; i++) {
    if ((b[i] <= 100) || (b[i] >= 50000)) {
      yes = false;
    }
    if (i != a - 1) {
      if (b[i] == b[i+1]) {
        yes = false;
      }
      if (b[i] > b[i+1]) {
        yes = false;
      }
    }
  }
  cout << (yes ? "Valid" : "Invalid") << endl;
  return 0;
}
