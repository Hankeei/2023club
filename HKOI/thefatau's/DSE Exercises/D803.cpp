#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, d, t = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << arr[0] << endl;
  for (int i = 1; i < n; i++) {
    t = i;
    for (int k = 0; k < i; k++) {
      if (arr[t - 1] > arr[t]) {
        d = arr[t - 1];
        arr[t - 1] = arr[t];
        arr[t] = d;
      }
      t--;
    }
    for (int j = 0; j <= i; j++) {
      cout << arr[j] << " ";
    }
    cout << endl;
  }
  return 0;
}
