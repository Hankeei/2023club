#include <bits/stdc++.h>
using namespace std;
int partition (int arr[], int st, int end) {
  int pivot = arr[end];
  int i = st, d = 0;
  for (int j = st; j < end; j++) {
    if (arr[j] <= pivot) {
      d = arr[j];
      arr[j] = arr[i];
      arr[i] = d;
      i++;
    }
  }
  d = arr[i];
  arr[i] = arr[end];
  arr[end] = d;
  return i;
}

void quicksort (int arr[], int st, int end) {
  if (st < end) {
    int p = partition(arr, st, end);
    quicksort(arr, st, p - 1);
    quicksort(arr, p + 1, end);
  }
}

int main() {
  int n, i = 0;
  cin >> n;
  int arr[100000];
  while (cin >> arr[i++]);
  partition(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
