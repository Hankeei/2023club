#include <bits/stdc++.h>
using namespace std;
int main() {
  int a ;
  cin >> a;
  for (int i = 0; i < a ; i++){
    for (int j = i*i; j > 0 ; j-=i){
      cout << j+1 << " ";
    }
    cout<< "1" << endl;
  }
}