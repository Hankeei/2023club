#include <bits/stdc++.h>
using namespace std;
class Steak {
  private:
  int head;
  int arr[999];  
  public:
  Steak() 
    : head(0) {}
  
  void m_push(int n) {
    arr[head] = n;
    head++;
  }

  void m_top() {
    if (head == 0) {
      cout << "Empty" << endl;
    }
    else {
      cout << arr[head - 1] << endl;
    }
  }

  void m_pop() {
    if (head == 0) {
      cout << "Cannot pop" << endl;
    }
    else {
      head--;
    }
  }

  void m_size() {
    cout << head << endl;
  }
};

int main() {
  int n, d;
  string str;
  Steak s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> str;
    if (str == "PUSH") {
      cin >> d;
      s.m_push(d);
    }
    else if (str == "SIZE") {
      s.m_size();
    }
    else if (str == "TOP") {
      s.m_top();
    }
    else if (str == "POP") {
      s.m_pop();
    }
  }
  return 0;
}
