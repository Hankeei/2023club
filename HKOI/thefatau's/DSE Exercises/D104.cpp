#include <bits/stdc++.h>
using namespace std;
int main() {
  double a , b , c , d , a1 , a2;
  cin >> a >> b >> c;
  d = (b*b) - (4*a*c);

  cout << fixed << setprecision(3);
  
  if (d > 0) {
    a1 = (-b + sqrt(d)) / (2*a);
    a2 = (-b - sqrt(d)) / (2*a);
    if (a2 < a1) {
      cout << a2 << " " << a1;
    }
    else {
      cout << a1 << " " << a2;
    }
    
  }  else if (d == 0) {
      a1 = -b / (2*a);
      cout << a1;
  }  else {
      cout << "None";
  }
  return 0;
}
