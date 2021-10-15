#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  char x, y;
  cin>>a>>x>>b>>y>>c;
  if (x=='+' && y=='+'){
    cout<<a+b+c;
  }else if (x=='+' && y=='-'){
    cout<<a+b-c;
  }else if (x=='+' && y=='*'){
    cout<<a+b*c;
  }else if (x=='-' && y=='-'){
    cout<<a-b-c;
  }else if (x=='-' && y=='+'){
    cout<<a-b+c;
  }else if (x=='-' && y=='*'){
    cout<<a-b*c;
  }else if (x=='*' && y=='+'){
    cout<<a*b+c;
  }else if (x=='*' && y=='-'){
    cout<<a*b-c;
  }else if (x=='*' && y=='*'){
    cout<<a*b*c;
  }
}
