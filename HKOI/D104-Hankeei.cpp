#include <bits/stdc++.h>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {

  int a, b, c;
  cin>>a>>b>>c;
  int delta = b*b-4*a*c;
  cout<<fixed<<setprecision(3);
  if(delta<0||(2*a==0)){
    cout<<"None"<<std::endl;
  } else if(delta==0){
    cout<<-b/(2.0*a)<<std::endl;
  } else {
    double e = (-b-sqrt(delta))/(2.0*a);
    double f = (-b+sqrt(delta))/(2.0*a);

      if(e>f){
        cout<<f<<' '<<e;
      }else{
        cout<<e<<' '<<f;
      }
      
  }
  
  return 0;
}
