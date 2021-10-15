#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main() {
  string a;
  getline(cin , a);
  int s;
  char b = 'A';
  if (a.length() == 7) {
    s = 324 + ((a[0] - 55) * 8) + ((a[1] - 48) * 7) + ((a[2] - 48) * 6) + ((a[3] - 48) * 5) + ((a[4] - 48) * 4) + ((a[5] - 48) * 3) + ((a[6] - 48) * 2);
  }
  else {
    s = ((a[0] - 55) * 9) + ((a[1] - 55) * 8) + ((a[2] - 48) * 7) + ((a[3] - 48) * 6) + ((a[4] - 48) * 5) + ((a[5] - 48) * 4) + ((a[6] - 48) * 3) + ((a[7] - 48) * 2);
  }
  cout << a << "(" << uppercase << hex << (11 - ((s % 11) > 0 ? (s % 11) : 11)) << ")" << endl;
  return 0;
}
