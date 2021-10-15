#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  int b[a];
  for (int i = 0; i <= a; i++) {
    cin >> b[i];
  }  
  sort (b , b + a, greater<int>());
  cout << b[0] << endl;
  cout << b[1] << endl;
  return 0;
}
