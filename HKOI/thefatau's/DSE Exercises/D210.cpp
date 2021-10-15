#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  double ans;
  cin >> n;
  int x[n - 1] , y[n - 1];
  for (int i = 0; i <= n - 1; i++) {
    cin >> x[i] >> y[i];
  }
  for (int i = 0; i <= n - 2; i++) {
    ans += (x[i] * y[i+1]) - (y[i] * x[i+1]);
  }  
  ans += (x[n - 1] * y[0]) - (y[n - 1] * x[0]);
  cout << fixed << setprecision(1);
  cout << abs(ans * 0.5) << endl;
  return 0;
}
