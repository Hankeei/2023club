#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  for (int i = 1; i <= (a + 1) / 2; i++) {
    for (int j = 1; j <= ((a + 1) / 2) - i; j++) {
      cout << " ";      
    }
    cout << "#"; 
    if (i != 1) {
      for (int k = 1; k <= 2 * i - 3; k++) {
        cout << " "; 
      }  
      cout << "#" << endl;
    }
    else {
      cout << endl; 
    }  
  }
  for (int i = ((a + 1) / 2) - 1; i >= 1; i--) {
    for (int j = ((a + 1) / 2) - i; j >= 1; j--) {
      cout << " ";      
    }
    cout << "#"; 
    if (i != 1) {
      for (int k = 2 * i - 3; k >= 1; k--) {
        cout << " "; 
      }  
      cout << "#" << endl;
    }
    else {
      cout << endl; 
    }  
  }
  return 0;
}
