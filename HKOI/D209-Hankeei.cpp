#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int numbers[n];
  bool valid = true;
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
    if (numbers[i] <= 100 || numbers[i] >= 50000) {
      valid = false;
      break;
    }
    if (numbers[i] <= numbers[i - 1]) {
        valid = false;
        break;
    }
    for (int j = 0; j < n && i != j && valid == true; j++) if (numbers[i] == numbers[j]) valid = false;
  }
  cout << (valid ? "Valid" : "Invalid") << endl;
  return 0;
}