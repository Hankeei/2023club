#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin >> n;
  vector <int> a;
  vector <int> :: iterator it;
  for (int i = 0; i < n; i++) {
    cin >> k;
    if (find(a.begin(), a.end(), k) == a.end()) {
      a.push_back(k);      
    }
  }
  cout << a.size() << endl;
  for (it = a.begin(); it != a.end(); it++) {
    cout << *it << ' ';
  }
  return 0;
}
