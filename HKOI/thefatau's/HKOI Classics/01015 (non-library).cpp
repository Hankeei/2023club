#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  getline(cin, s);
  int len = s.length();
  char tail;
  stack <char> a;
  for (int i = 0; i < len; i++) {
    if ((s[i] == '(') || (s[i] == '[') || (s[i] == '{')) {
      a.push(s[i]);
    }
    else if (a.size() == 0) {
      cout << "No";
      return 0;
    }
    else if ((s[i] == ')') && (tail == '(')) {
      a.pop();
    }
    else if ((s[i] == ']') && (tail == '[')) {
      a.pop();
    } 
    else if ((s[i] == '}') && (tail == '{')) {
      a.pop();
    }
    if (a.size() != 0) {
      tail = a.top();
    }
  }
  cout << (a.empty() ? "Yes" : "No");
  return 0;
}
