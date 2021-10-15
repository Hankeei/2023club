#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str , str1;
    getline(cin,str);
    str1 = str;
    reverse(str.begin(), str.end());
 
    cout << str << endl;

    if (str1 == str){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  
    return 0;
}
