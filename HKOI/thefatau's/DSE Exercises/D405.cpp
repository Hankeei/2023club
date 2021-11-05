#include <bits/stdc++.h>
using namespace std;
int main() {
  int h, w, r = 0, c = 0;
  char maze[21][21];
  cin >> h >> w;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> maze[i][j];
    }
  }
  maze[h][w - 1] = 'S';
  for (int i = h - 1; i >= 0; i--) {
    for (int j = w - 1; j >= 0; j--) {
      if (maze[i][j] == '#') {
        continue;
      }
      if ((maze[i + 1][j] == 'S') || (maze[i + 1][j] == 'E')) {
        maze[i][j] = 'S';
      } else if ((maze[i][j + 1] == 'S') || (maze[i][j + 1] == 'E')) {
        maze[i][j] = 'E';
      }
    }
  }
  for (int i = 0; i < h + w - 2; i++) {
    cout << maze[r][c];
    if (maze[r][c] == 'S') {
      r++;
    }
    else {
      c++;
    }
  }
  return 0;
}
