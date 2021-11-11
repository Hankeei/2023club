#include <bits/stdc++.h>
using namespace std;
class Q {
  private:
  int head, tail;
  int arr[999];
  public:
  Q() 
    : head(0), tail(0) {}
  
  void m_push(int n) {
    arr[tail] = n;
    tail++;
  }

  void m_front() {
    if (head == tail) {
      cout << "Empty" << endl;
    }
    else {
      cout << arr[head] << endl;
    }
  }

  void m_pop() {
    if (head == tail) {
      cout << "Cannot pop" << endl;
    }
    else {
      head++;
    }
  }

  void m_size() {
    cout << tail - head << endl;
  }
};

int main() {
  int n, d;
  string str;
  Q owo;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> str;
    if (str == "PUSH") {
      cin >> d;
      owo.m_push(d);
    }
    else if (str == "SIZE") {
      owo.m_size();
    }
    else if (str == "FRONT") {
      owo.m_front();
    }
    else if (str == "POP") {
      owo.m_pop();
    }
  }
  return 0;
}
