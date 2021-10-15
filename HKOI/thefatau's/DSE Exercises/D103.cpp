#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main() {
  float a , b , c;
  cin >> a >> b >> c;
  
  float area = 0.5 * a * b * sin( c * M_PI / 180);
  
  cout << fixed << setprecision(3);
  cout << area;
  return 0;
}
