#include <bits/stdc++.h>
using namespace std;
int main() {
  int num;
  cin >> num;
  bool arr[num];
  memset(arr, true, sizeof(arr));
  /*if (num >= 2){cout << 2 << endl;}
  if (num >= 3){cout << 3 << endl;}
  if (num >= 5){cout << 5 << endl;}
  for (int i = 0; i < num; i++){
    if ((i != 0) && (i != 1) && (i%2 != 0) && (i%3 != 0) && (i%5 != 0)){
      cout << i << endl;
    }
  }*/
  for (int i = 2; i <= sqrt(num); i++) {
    if (arr[i] == true){
      for (int j = i*i; j <= num; j += i){
        arr[j] = false;
      }
    }
  }
  
  for (int i = 2; i <= num; i++){
    if (arr[i] == true){
      cout << i << endl;
    }
  }
  return 0;
}
