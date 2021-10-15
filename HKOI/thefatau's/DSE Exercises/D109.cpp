#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  while (a >= 1000) {
    cout << "1000" << endl;
    a -= 1000;
  }
  while (a >= 500) {
    cout << "500" << endl;
    a -= 500;
  }
  while (a >= 100) {
    cout << "100" << endl;
    a -= 100;
  }
  while (a >= 50) {
    cout << "50" << endl;
    a -= 50;
  }
  while (a >= 20) {
    cout << "20" << endl;
    a -= 20;
  }
  while (a >= 10) {
    cout << "10" << endl;
    a -= 10;
  }
  return 0;
}
