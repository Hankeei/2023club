#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  while (cin >> a) {
    if (a % 2 == 1) {
      cout << a;
      return 0;
    }
  }
  cout << "Goodest English";
}
