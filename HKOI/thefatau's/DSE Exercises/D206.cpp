#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  while (a != 1) {
    if (a % 2 == 1) {
      cout << a << endl;
      a = 3 * a + 1;
    } 
    if (a % 2 == 0) {
      cout << a << endl;
      a /= 2;
    } 
  }
  cout << "1";
  return 0;
}
