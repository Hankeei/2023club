#include <bits/stdc++.h>
using namespace std;
int main() {
  int y1 , m1 , d1 , y2 , m2 , d2;
  cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
  if ((y1 == y2) && (m1 == m2) && (d1 == d2)) {
    cout << "Same";
  }
  else if (y1 != y2) {
    if (y1 > y2) {
      cout << "After";
    }
    else {
      cout << "Before";
    }
  }
  else if (m1 != m2) {
    if (m1 > m2) {
      cout << "After";
    }
    else {
      cout << "Before";
    }
  }
  else if (d1 != d2) {
    if (d1 > d2) {
      cout << "After";
    }
    else {
      cout << "Before";
    }
  }
  return 0;
}
