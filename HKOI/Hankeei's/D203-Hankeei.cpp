#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int main() {
  int target;
  cin >> target;
  if (target >= 2 && target <= 9) {
    for (int i = 1; i <= 100; i++) {
      if((i % 10 == 1) && i != 1){cout<< endl;}
      if((i%target == 0) || (i % 10 == target) || (i/10==target)){
        cout<<"Clap ";
      }else {
      cout<< i << " ";}
    }
  }
  return 0;
}