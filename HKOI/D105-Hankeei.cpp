#include <bits/stdc++.h>
using namespace std;
int main() {

  int yf,mf,df,ys,ms,ds,date1,date2;
  cin>>yf>>mf>>df>>ys>>ms>>ds;
  date1 = yf*100000+mf*1000+df*10;
  date2 = ys*100000+ms*1000+ds*10;

  
  if(date1<date2){
    cout<<"Before"<<std::endl;
  }else if(date1>date2){
    cout<<"After"<<std::endl;
  }else {
    cout<<"Same"<<std::endl;
  }
  
  return 0;
}
