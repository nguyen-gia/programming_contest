#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int l, d;
  if (k %(2*m) == 0) {
    l = k / (2*m);
  } else {
    l = k / (2*m) + 1;
  }
  int r = k % (2*m);
  if (r == 0) r = 2*m;
  if (r %2 == 0) {
    d = r / 2;
  } else {
    d = r / 2 + 1;
  }

  char c = (k % (2 * m)) % 2 == 0 ? 'R' : 'L';
  cout << l << " " << d << " " << c << endl;
  return 0;
}
