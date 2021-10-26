#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream ifs("weather.txt");
  int n, maxt = 0, mint = 1000;
  string dum;
  while (!ifs.eof()) {
    ifs.ignore(32);
    ifs >> n;
    maxt = max(n, maxt);
    mint = min(n, mint);
    getline(ifs, dum);
  }
  cout << mint << ' ' << maxt;
  return 0;
}
