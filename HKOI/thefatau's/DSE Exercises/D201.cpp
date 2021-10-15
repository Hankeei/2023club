#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main() {
  int a , b;
  long double PHI , phi;
  cin >> a;
  PHI = (1 + sqrt(5)) / 2;
  phi = (1 - sqrt(5)) / 2;
  b = ((pow(PHI , a) - pow(phi , a)) / sqrt(5));
  cout << b << endl;
  return 0;
}
