#include <bits/stdc++.h>
using namespace std;
int main() {
  int a , b , c;
  cin >> a;
  b = a % 10;
  c = a % 100;
  if ((c > 10) && (c < 14)) {
    cout << a << "th";
  }
  else if (b == 1) {
    cout << a << "st";
  }
  else if (b == 2) {
    cout << a << "nd";
  }
  else if (b == 3) {
    cout << a << "rd";
  }
  else {
    cout << a << "th";
  }  
  return 0;
}
