#include <bits/stdc++.h>
using namespace std;

void in_matran(int x, int y) {
  vector<vector<int>> a(x, vector<int>(y));
  int i = 0, j = 0, count = 1;
  int dx[] = {0, 1, 0, -1};
  int dy[] = {1, 0, -1, 0};
  int dir = 0;
  while (count <= x * y) {
    a[i][j] = count++;
    int next_i = i + dx[dir];
    int next_j = j + dy[dir];
    if (next_i < 0 || next_i >= x || next_j < 0 || next_j >= y || a[next_i][next_j] != 0) {
      dir = (dir + 1) % 4;
    }
    i += dx[dir];
    j += dy[dir];
  }
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < y; ++j) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int x, y;
  cin >> x >> y;
  in_matran(x, y);
}
