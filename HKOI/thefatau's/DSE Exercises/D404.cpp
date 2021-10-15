#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, m, from, to;
  cin >> a;
  double b[a][a];
  char type;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      cin >> b[i][j];
    }
  }
  cin >> m;
  cout << fixed << setprecision(1);
  for (int i = 0; i < m; i++) {
    cin >> from >> to >> type;
    if (type == 'A') {
      if (from < to) {
        cout << b[from - 1][to - 1] << endl;        
      }
      else {
        cout << b[to - 1][from - 1] << endl;
      }
    }
    else {
      if (from > to) {
        cout << b[from - 1][to - 1] << endl;        
      }
      else {
        cout << b[to - 1][from - 1] << endl;
      }
    }
  }
  return 0;
}
