#include <bits/stdc++.h>
using namespace std;
int main() {
  double w , h , bmi;
  cin >> w >> h;
  bmi = w / (h * h);
  
  cout << fixed << setprecision(3);
  cout << bmi << endl;

  if(bmi < 18.5) {
    cout << "Underweight" << endl;
  }
  else if (bmi < 23) {
    cout << "Normal" << endl;
  }
  else if (bmi < 25) {
    cout << "Overweight" << endl;
  }
  else {
    cout << "Obese" << endl;
  }
  return 0;
}
