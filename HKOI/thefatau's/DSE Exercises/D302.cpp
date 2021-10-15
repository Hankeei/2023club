#include <bits/stdc++.h>
using namespace std;
int main() {
  string a;
  int words = 0;
  getline(cin , a);
  for (int i = 0; i < a.length(); i++) {
    if (a[i] == ' ') {
      words++;
    }
  }
  cout << a.length() << endl;
  cout << words + 1 << endl;
  return 0;
}
