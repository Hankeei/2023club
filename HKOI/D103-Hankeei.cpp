#include <bits/stdc++.h>
#include <math.h>
#include <iomanip>

#define PI 3.14159265

using namespace std;
int main() {
  int a,b,c;
  double r, sc;
  

  cin>>a>>b>>c;
  sc = sin(c*PI/180);
  r = 0.5*a*b*sc;
  cout<<fixed<<setprecision(3)<<r<<std::endl;
  
  return 0;
}
