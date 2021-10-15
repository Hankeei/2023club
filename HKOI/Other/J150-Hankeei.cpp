#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m = 1;
  cin >> n;
  for (int i = 0 ; i < n; i++){
    for (int j = 0 ; j < n; j++){
      cout << m;
      if (j == n-1){
        cout << endl;
      } else {
        cout << " ";
        m+=4;
      }
    }
  }
  return 0;
}
