#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  for (int i = 1; i <= 100; i++) { 
    if ((i % 10 == 1) && (i != 1)) {
      cout << endl;
    }
    if ((i % a == 0) || (i % 10 == a) || (i / 10 == a)) {
      cout << "Clap" << " ";
    }    
    else {
      cout << i << " ";
    }
    
  }
  return 0;
}
