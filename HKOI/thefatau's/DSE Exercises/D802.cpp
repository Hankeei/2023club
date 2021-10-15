#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, s = 0, d;
  cin >> n >> a;
  int arr[2001];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (a == 0) {
        if (arr[j] > arr[j + 1]) {
          d = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = d;
          s++;
        }        
      }
      else {
        if (arr[j] < arr[j + 1]) {
          d = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = d;
          s++;
        }
      }
    }
  }
  cout << s << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
