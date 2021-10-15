#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, q;
  cin >> n >> q;
  int numbers[n], targets[q];
  for (int i = 0; i < n; i++) cin >> numbers[i];
  for (int i = 0; i < q; i++) cin >> targets[i];
  for (int i = 0; i < sizeof(targets) / sizeof(targets[0]); i++) {
    bool found = false;
    for (int j = 0; j < sizeof(numbers) / sizeof(numbers[0]); j++) {
      if (targets[i] == numbers[j]) {
        found = true;
        break;
      }
    }
    cout << (found ? "Yes" : "No") << endl;
  }
  return 0;
}
