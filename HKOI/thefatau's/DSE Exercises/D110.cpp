#include <bits/stdc++.h>
using namespace std;
int main() {
  char a1 , b1 , a2 , b2;
  cin >> a1 >> b1 >> a2 >> b2;
  int f = abs(a1 - a2);
  int c = abs(b1 - b2);
  if (f > c) {
    cout << f << endl;
  }
  else {
    cout << c << endl;
  }
  return 0;
}
