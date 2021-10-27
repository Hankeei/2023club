#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, dum;
  string s;
  queue <int> q;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == "PUSH") {
      cin >> dum;
      q.push(dum);
    }
    else if (s == "SIZE") {
      cout << q.size() << endl;
    }
    else if (s == "FRONT") {
      if (!q.empty()) {
        cout << q.front() << endl; 
      }
      else {
        cout << "Empty" << endl;
      }
    }
    else if (s == "POP") {
      if (!q.empty()) {
        q.pop();
      }
      else {
        cout << "Cannot pop" << endl;
      }
    }
  }
  return 0;
}
