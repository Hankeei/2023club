#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, p, d, sum = 0, k = 0;
  cin >> p >> n;
  for (int i = 0; i < n; i++) {
    cin >> d;
    sum += d;
  }
  sum -= p;
  while (sum >= 0) {
    sum -= 250;
    k++;
  }
  cout << '$' << k * 250 << endl;
  return 0;
}
