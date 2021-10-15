#include <bits/stdc++.h>
using namespace std;
int main() {

  int a,b,n1,n2,temp,hcf,lcm;
  cin>>n1>>n2;
  a = n1;
  b = n2;
  while (b!=0){
    temp = b;
    b=a%b;
    a = temp;
  }
  hcf = a;
  lcm = (n1*n2)/hcf;
  cout<<hcf<<endl<<lcm<<endl;
  
  return 0;
}
