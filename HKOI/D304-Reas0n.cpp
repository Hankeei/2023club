#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
  string word;
  list<char> remain;
  bool correct;
  cin >> word;
  for (int i = 0; i < word.length(); i++) remain.push_back(word[i]);
  while (!correct) {
    char guess;
    cin >> guess;
    remain.remove(guess);
    string hint = word;
    for (list<char>::iterator it = remain.begin(); it != remain.end(); it++) replace(hint.begin(), hint.end(), *it, '_');
    cout << hint << endl;
    correct = remain.size() == 0;
  }
  return 0;
}
