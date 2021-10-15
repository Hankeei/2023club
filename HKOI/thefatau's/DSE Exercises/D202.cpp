#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  int a;
  vector <int> b;
  vector <int> :: iterator c;
  cin >> a;
  if (a != 1) {
    for (int i = 1; i <= sqrt(a); i++) {
      if (a % i == 0) {
        b.push_back (i);
        b.push_back (a / i);
      }
    }
    
    sort(b.begin() , b.end());
    unique(b.begin() , b.end());
    c = find(b.begin() , b.end() , a);
    b.resize(c - b.begin() + 1);
    
    for (int i = 1; i <= b.size(); i++) {
      cout << b[i-1] << endl;    
    }
  }
  else {
    cout << "1" << endl;
  }
  return 0;
}
