#include <bits/stdc++.h>
using namespace std;
int main() {
  int a , i;
  cin >> a;
  int b = sqrt(a);
  cout << a << "=";
  for (int i = 2; i <= b; i++) {
    while (a % i == 0) {
      a /= i;
      cout << i << (a == 1 ? "" : "*");      
    }
  }
  if (a > 1) {
    cout << a;
  }
  return 0;
}
