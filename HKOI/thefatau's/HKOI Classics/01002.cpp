#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b, r;
  int k = 0;
  getline(cin, a);
  getline(cin, b);
  for (int i = 0; i < a.length(); i++) {
    r = a.substr(i, b.length());
    if (r == b) {
      k++;
    }
  }
  cout << k;
  return 0;
}
