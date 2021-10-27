#include <bits/stdc++.h>
using namespace std;
int main() {
  ofstream ofs("chart.txt");
  int arr[6], l = 0;
  while (cin >> arr[l++]);
  ofs << "+-------------------------+" << endl;
  for (int i = 10; i > 0; i--) {
    ofs << "| ";
    for (int j = 0; j < 6; j++) {
      if (arr[j] >= i) {
        ofs << "### ";
      }
      else {
        ofs << "    ";
      }
    }
    ofs << "|" << endl;
  }
  ofs << "+-------------------------+" << endl;
  ofs.close();
  return 0;
}
