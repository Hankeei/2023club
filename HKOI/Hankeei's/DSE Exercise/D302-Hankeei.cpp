#include <bits/stdc++.h>
using namespace std;
int main() {
  string a;
  char ntr[256];
  getline(cin,a);
  strcpy(ntr,a.c_str());
  int b = a.length();
  int c = 0;
  for (int i = 0; ntr[i] != '\0';i++)
    {
        if (ntr[i] == ' ')
            c++;    
    }
  cout<< b << endl << c+1 << endl;
  
  return 0;
}
