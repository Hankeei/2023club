#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b;
  getline(cin, a);
  b = a;
  for (int i = 0; i < a.length(); i++) {
    b[a.length() - 1 - i] = a[i];
  }
  cout << b << endl;
  cout << (b == a ? "Yes" : "No");
  return 0;
}
