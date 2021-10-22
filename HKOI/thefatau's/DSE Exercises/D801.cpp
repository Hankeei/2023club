#include <bits/stdc++.h>
using namespace std;
int gimme(int arr[], int len, int num) {
  int st = 0, end = len - 1;
  while (st <= end) {
    int mid = (st + end) / 2;
    if (num < arr[mid]) {
      end = mid - 1;
    }
    else if (num > arr[mid]) {
      st = mid + 1;
    }
    else {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}

int main() {
  int n, q, qnum;
  cin >> n >> q;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < q; i++) {
    cin >> qnum;
    gimme(arr, n, qnum);
  }
  return 0;
}
