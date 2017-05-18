#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s, t;
  cin >> s >> t;
  sort(s.begin(), s.end());
  sort(t.rbegin(), t.rend());
  // cout << s << endl;
  // cout << t << endl;
  int n = s.length();
  int sl = 0, sr = n % 2 == 0 ? n/2 - 1: n/2;
  int tl = 0, tr = n/2 - 1, k = 0;
  string res = s;
  int li = 0, ri = n-1;
  while (k < n) {
    if (sl <= sr ) {
      if (s[sl] < t[tl]) {
        res[li++] = s[sl];
        sl++;
      } else {
        res[ri--] = s[sr];
        sr--;
      }
      k++;
    }
    if (tl <= tr) {
      if (s[sl] < t[tl]) {
        res[li++] = t[tl];
        tl++;
      } else {
        res[ri--] = t[tr];
        tr--;
      }
      k++;
    }
  }
  cout << res << endl;
  return 0;
}
