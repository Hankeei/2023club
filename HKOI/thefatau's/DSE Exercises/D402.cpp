#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  long upc, dum;
  int item[101];
  double price, sum = 0;
  map <int, double> store;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> upc >> price;
    store.insert(pair<int, double>(upc, price));
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> dum;
    if (store.find(dum) != store.end()) {
      sum += store.at(dum);
    }
  }
  cout << fixed << setprecision(1) << sum;
  return 0;
}
