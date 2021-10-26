#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main() {
  ifstream ifs("account.txt");
  int sum = 0, n, i;
  ifs >> n;
  while (ifs >> i) {
    sum += i;
  }
  cout << sum;
  return 0;
}
