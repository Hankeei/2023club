#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main() {  
  string s;
  getline(cin , s);
  bool v = true;
  int at = s.find('@');
  for (int i = 0; i < at; i++) {
    if (!(isalnum(s[i]) || s[i] == '.' || s[i] == '+')) {
      v = false;
    }
  }
  for (int i = at + 1; i < s.length(); i++) {
    if (!(isalnum(s[i]) || s[i] == '.' || s[i] == '-')) {
      v = false;
    }
  }
  if ((s[0] == '.') || (s[at - 1] == '.') || (s[at + 1] == '.') || (s[s.length() - 1] == '.')) {
    v = false;
  }
  if ((s.find('.' , at - 1)) == string::npos) {
    v = false;
  }
  for (int i = 0; i < s.length(); i++) {
    if (i != s.length() - 1) {
      if ((s[i] == '.') && (s[i + 1] == '.')) {
        v = false;
      }        
    }
  }
  for (int i = at + 1; i < s.length(); i++) {
    if ((s[i] == '.') && ((s[i + 1] == '-') || (s[i - 1] == '-'))) {
      v = false;
    }        
  }
  cout << (v ? "Valid" : "Invalid") << endl;
  return 0;
}
