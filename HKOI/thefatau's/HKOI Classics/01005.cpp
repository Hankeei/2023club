#include <bits/stdc++.h>
using namespace std;
int main() {
  string str;
  getline(cin , str);
  reverse(str.begin(), str.end() - 4);
  cout << str << endl;
  return 0;
}
