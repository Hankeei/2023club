#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++){
    for (int j = 0 ; j < a; j++){
      cout << (i*i) + (j*i);
      if (j == a-1){cout << endl;} else {cout << ' ';} 
    }
  }  
  return 0;
}
