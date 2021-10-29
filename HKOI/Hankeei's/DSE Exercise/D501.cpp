#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main() {
  int n, s, m = 0;
  ifstream fin("account.txt");
  fin >> n;
  for (int i = 0; i < n; i++){
    fin >> s;
    m += s;
  }
  cout << m;
  return 0;
}
