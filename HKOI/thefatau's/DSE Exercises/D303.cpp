#include <bits/stdc++.h>
using namespace std;
int main() {
  string a , b;
  getline(cin , a);
  b = a;
  for (int i = 0; i < a.length() / 2; i++) {
    swap(a[i] , a[a.length() - i - 1]);
  }
  cout << a << endl;
  cout << (a.compare(b) == 0 ? "Yes" : "No") << endl;
  return 0;
}
