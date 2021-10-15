#include <bits/stdc++.h>
using namespace std;
int main() {
  char a[3][3];
  int rn , cn;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
  //row
  for (rn = 0; rn < 3; rn++) {
    if ((a[rn][0] == a[rn][1]) && (a[rn][1] == a[rn][2])) {
      if (a[rn][0] != '.') {
        cout << a[rn][0] << " wins" << endl;
        return 0;            
      }
    }
  }
  //column
  for (cn = 0; cn < 3; cn++) {
    if ((a[0][cn] == a[1][cn]) && (a[1][cn] == a[2][cn])) {
      if (a[0][cn] != '.') {
        cout << a[0][cn] << " wins" << endl;
        return 0;            
      }
    }
  }
  //digonal
  if (((a[0][0] == a[1][1]) && (a[1][1] == a[2][2])) || ((a[0][2] == a[1][1]) && (a[1][1] == a[2][0]))) {
    if (a[1][1] != '.') {
      cout << a[1][1] << " wins" << endl;
      return 0;      
    }
  }
  //dot
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (a[i][j] == '.') {
        cout << "Not ended" << endl;
        return 0;
      }
    } 
  }
  cout << "Draw" << endl;
}
