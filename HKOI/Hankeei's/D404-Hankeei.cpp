#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,m, from, to;
  char type;
  cin >> n;
  double arr[n][n];
  for (int i = 0 ; i < n ; i++){
    for (int j = 0 ; j < n ; j++){
      cin >> arr[i][j];
    }
  }
  cin >> m;
  cout << fixed << setprecision(1);
  for (int k = 1; k <= m ; k++){
    cin >> from >> to >> type;
    if (type == 'A'){
      if (to > from){
      cout << arr[from-1][to-1] << endl;
      }else{
      cout << arr[to-1][from-1] << endl;
      }
    }else{
      if (to > from){
      cout << arr[to-1][from-1] << endl;
      }else{
      cout << arr[from-1][to-1] << endl;
      }
    }
  }
  return 0;
}
