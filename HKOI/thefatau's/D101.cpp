#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  a /= 10000000;
  if((a == 2) || (a == 3)) {  
    cout << "Fixed";
  }
  else {  
    cout << "Moblie";
  }
  return 0;
}
