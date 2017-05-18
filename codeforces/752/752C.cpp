#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int pointX(char c) {
  if (c == 'R') return 1;
  if (c == 'L') return -1;
  return 0;
}
int pointY(char c) {
  if (c == 'U') return 1;
  if (c == 'D') return -1;
  return 0;
}
int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  int x = 0, y = 0, cnt = 0;
  for (int i=0; i<s.length(); i++) {
    if (x * pointX(s[i]) < 0 || y * pointY(s[i]) < 0) {
      cnt++;
      x = 0;
      y = 0;
    }
    if (x == 0){
      x = pointX(s[i]);
    }
    if (y == 0) {
      y = pointY(s[i]);
    }
  }
  cout << cnt + 1 << endl;
  return 0;
}
