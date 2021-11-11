#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, head = 0 , wush;
  string str;
  cin >> a;
  int arr[a];
  for (int i = 0; i < a; i++){
    cin >> str;
    if (str == "PUSH"){
      cin >> wush;
      arr[head] = wush;
      head++;
    } 
    else if (str == "SIZE"){
      cout << head << endl;
    }
    else if (str == "POP")
      if (head == 0){
        cout << "Cannot pop" << endl;
      } else {
        head--; 
      }
    else if (str == "TOP"){
      if (head == 0){
        cout << "Empty" << endl;
      } else {
        cout << arr[head-1] << endl;
      }
    }
    
  }
  return 0;
}
