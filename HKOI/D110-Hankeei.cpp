#include <bits/stdc++.h>
using namespace std;
int main() {
  char a,c;
  int b,d,e,f;
  cin>>a>>b>>c>>d;
  if (a>c){
    e = a-c;
  }else{
    e = c-a;
  }
  if (b>d){
    f = b-d;
  }else{
    f = d-b;
  }
  if (e>f){cout<<e<<endl;}else{cout<<f<<endl;}
  // dont ask cout<<(a-c)+(b-d)<<endl;
  return 0;
}
