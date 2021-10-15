#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int num[n];
  list<int> numbers;
  for (int i = 0; i < n; i++) cin >> num[i];
  for (int i = 0; i < n; i++) {
    numbers.push_back(num[i]);
    numbers.sort();
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) cout << *it << " ";
    cout << endl;
  }
  return 0;
}
