#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  int a;
  int b = 0;
  cin >> a;
  for (int i = 1; i <= a; i++) {
    if (i != 2) {
      for (int j = 2; j <= i; j++) {
        b += i - 1;
      }
      for (int k = b; k > 1; k = b) {
        cout << b + 1 << " ";
        b -= i - 1;
      }
    }
    else {
      cout << "2 ";
    }
    cout << "1" << endl;
    b = 0;        
  }
  return 0;
}
