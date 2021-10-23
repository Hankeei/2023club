#include <bits/stdc++.h>
using namespace std;
string check(string s, string dum) {
  string::iterator it;
  for (int j = 0; j < dum.length(); j++) {
    it = s.begin() + s.find(dum[j]);
      if (s.find(dum[j]) != string::npos) {
        dum[j] = '_';
        s.erase(it);
      }
    }
  for (int j = 0; j < dum.length(); j++) {
    if (dum[j] != '_') {
      return "No";
    }
  }
  return "Yes";
}

int main() {
  string s, dum;
  int n;
  getline(cin, s);
  cin >> n;
  getline(cin, dum);
  for (int i = 0; i < n; i++) {
    getline(cin, dum);
    cout << check(s, dum) << endl;
  }
  return 0;
}
