#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
int main() {
  string s, t;
  int i = 0, j = 0;
  getline(cin, s);
  getline(cin, t);
  while (s[i++]) {
    s[i - 1] = toupper(s[i - 1]);
  }
  while (t[j++]) {
    t[j - 1] = toupper(t[j - 1]);
  }
  cout << ((s > t) ? "Greater" : ((s < t) ? "Smaller" : "Equal"));
  return 0;
}
