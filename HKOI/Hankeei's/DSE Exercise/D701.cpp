#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, head = 0, arr[1000], wush, top = 0;
  string s;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> s;
    if (s == "PUSH"){
      cin >> wush;
      arr[head] = wush;
      head++;
    } else if (s == "SIZE"){
      cout << head - top << endl;
    } else if (s == "FRONT"){
      if (head == top){
        cout << "Empty" << endl;
      } else {
        cout << arr[top] << endl;
      }
    } else if (s == "POP"){
      if (head == top){
        cout << "Cannot pop" << endl;
      } else {
        top++;
      }
    }
  }
  return 0;
}
