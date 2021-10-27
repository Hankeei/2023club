#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, dum;
  string s;
  stack <int> st;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == "PUSH") {
      cin >> dum;
      st.push(dum);
    }
    else if (s == "SIZE") {
      cout << st.size() << endl;
    }
    else if (s == "TOP") {
      if (!st.empty()) {
        cout << st.top() << endl; 
      }
      else {
        cout << "Empty" << endl;
      }
    }
    else if (s == "POP") {
      if (!st.empty()) {
        st.pop();
      }
      else {
        cout << "Cannot pop" << endl;
      }
    }
  }
  return 0;
}
