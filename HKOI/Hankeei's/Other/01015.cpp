#include <bits/stdc++.h>
using namespace std;
int main() {
  string str;
  getline (cin , str);
  stack <char> s;
  for (int i = 0; i < str.length(); i++){
    if ((str[i] == '[') || (str[i] == '(') || (str[i] == '{')){
      s.push(str[i]);
    }else if (s.empty()){
      cout << "No";
      return 0;
    }
    else if((str[i] == ']') && (s.top() == '[')){
      s.pop();
    }
    else if((str[i] == ')') && (s.top() == '(')){
      s.pop();
    }
    else if((str[i] == '}') && (s.top() == '{')){
      s.pop();
    }
  }

  cout << (s.empty() ? "Yes" : "No");
  
  return 0;
}
