#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main() {
  double f;
  double k; 
  cin.ignore();
  cin>> f;
  int fk=f*10;
  int fku;
  if (fk%2==0){fku=fk/2;} else {fku=fk/2+1;}
    cout<< '$' << fixed << setprecision (1) << (fku/10.0) << std::endl ;
  return 0;
}
