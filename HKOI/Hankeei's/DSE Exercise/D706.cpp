#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, head = 0, arr[10001], wush, top = 0;
  string s;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> s;
    if (s == "PUSH"){
      cin >> wush;
      arr[head++] = wush;
      if (head == 10001){
        head = 0;
      }
    } else if (s == "SIZE"){
      cout << (10001 + head - top) % 10001 << endl;
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
        if (top == 10001){
          top = 0;
        }
      }
    }
  }
  return 0;
}
