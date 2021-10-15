#include <bits/stdc++.h>
using namespace std;
int main() {
  string a , x;
  getline(cin , a);
  string b(a.length() , '_');
  while (a != b) {
    getline(cin , x);
    for (int i = 0; i <= a.length() - 1; i++) {
      if (a.compare(i , 1 , x) == 0) {
        b.replace(i , 1 , x);
      }
    }
    cout << b << endl;
  }
  return 0;
}
