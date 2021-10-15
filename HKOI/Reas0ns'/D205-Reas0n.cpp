#include <bits/stdc++.h>
using namespace std;

void calc(unsigned* j) {
  while (*j % 2 == 0) {
    *j /= 2;
    cout << 2 << (*j == 1 ? "" : "*");
  }
  for (int prime = 3; prime <= *j; prime += 2) {
    while (*j % prime == 0) {
      *j /= prime;
      cout << prime << (*j == 1 ? "" : "*");
    }
  }
}

int main() {
  unsigned n;
  cin >> n;
  cout << n << "=";
  calc(&n);
  return 0;
}