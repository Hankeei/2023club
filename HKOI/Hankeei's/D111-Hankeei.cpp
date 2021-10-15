#include <bits/stdc++.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
  double bmi, w, h;
  cin>>w>>h;
  cout<<fixed<<setprecision(3);

  bmi = w/(h*h);

  if (bmi < 18.5){
    cout<<bmi<<endl<<"Underweight"<<endl;
  }else if(bmi < 23){
    cout<<bmi<<endl<<"Normal"<<endl;
  }else if(bmi < 25){
    cout<<bmi<<endl<<"Overweight"<<endl;
  }else {
    cout<<bmi<<endl<<"Obese"<<endl;
  }
  return 0;
}
