#include <bits/stdc++.h>
using namespace std;
int main() {
  int a , b , yes , c , d;
  cin >> a >> b;
  c = a;
  d = b;
  while (a != 0) {
    yes = a;
    a = b % a;
    b = yes;
  }
  cout << b << endl;
  cout << c * d / b;
  return 0;
}
