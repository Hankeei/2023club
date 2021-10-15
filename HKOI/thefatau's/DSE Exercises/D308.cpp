#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
  string s, t;
  getline(cin, s);
  getline(cin, t);
  int slen = s.length(), tlen = t.length(), ans1 = 0, ans2 = 0;
  for (int i = 0; i < slen; i++) {
    if (s.substr(i, tlen) == t) {
      ans1++;
    }
  }
  for (int i = 0; i < slen; i++) {
    if (s.substr(i, tlen) == t) {
      ans2++;
      i += tlen - 1;
    }
  }
  cout << ans1 << endl;
  cout << ans2 << endl;
  return 0;
}
