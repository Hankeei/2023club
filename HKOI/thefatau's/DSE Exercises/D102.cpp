#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.ignore();
  float a;
  cin >> a;  
  int b = a * 10;
  if (b % 2 == 1){
    b = b + 1;
  }
  float c = b;
  cout << fixed << setprecision(1); 

  cout << "$" << c/20 << endl; 
  return 0;
}
