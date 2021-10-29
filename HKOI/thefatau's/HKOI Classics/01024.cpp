#include <bits/stdc++.h>
using namespace std;
int main() {
  int sum = 0;
  stack <int> arr;
  string s, n;
  bool carry = false;
  getline(cin, s);
  getline(cin, n);
  int len = max(s.length(), n.length());
  for (int i = 1; i <= len; i++) {
    if (i > s.length()) {
      sum = n[n.length() - i] - 48;
    }
    else if (i > n.length()) {
      sum = s[s.length() - i] - 48;
    }
    else {
      sum = (s[s.length() - i] - 48) + (n[n.length() - i] - 48);      
    }
    if (carry) {
      sum += 1;
      carry = false;
    }
    if (sum > 9) {
      sum -= 10;
      carry = true;
    }
    arr.push(sum);
  }
  if (carry) {
    arr.push(1);
  }
  while (!arr.empty()) {
    cout << arr.top();
    arr.pop();
  } 
  return 0;
}
