#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a;
  while (cin >> b) {
    if (b % 2 == 1) {
      cout << b;
      return 0;
    }
  }
  cout << "Goodest English";
}
