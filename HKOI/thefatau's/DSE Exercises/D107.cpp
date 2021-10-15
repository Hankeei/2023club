#include <bits/stdc++.h>
using namespace std;
int main() {
  long double a , sd , td1 , td2;
  bool sq , tri;
  cin >> a; 
  sd = sqrt(a);
  td1 = 0.5 * (sqrt(8 * a + 1) -1);
  td2 = 0.5 * (-sqrt(8 * a + 1) -1); 

  if (abs(sd - long(sd)) == 0) {
    sq = true;
  }
  else {
    sq = false;
  }
  if ((abs(td1 - long(td1)) == 0) && ((abs(td2 - long(td2)) == 0))){
    tri = true;
  }
  else {
    tri = false;
  }

  if (sq && tri) {
    cout << "Both" << endl;
  }
  else if (sq) {
    cout << "Square" << endl;
  }
  else if (tri) {
    cout << "Triangular" << endl;
  }
  else {
    cout << "Neither" << endl;
  }
  
 return 0;
}
