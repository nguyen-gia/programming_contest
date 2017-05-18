#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  m--;
  int a[n];
  for (int i=0; i < n; i++) {
    cin >> a[i];
  }
  int l = 1;
  int r = 1;
  while(m-l >= 0 && (a[m-l] == 0 || a[m-l] > k)) l++;
  while(m+r < n && (a[m+r] == 0 || a[m+r] > k)) r++;
  l = m-l >= 0 ? l : 1 << 30;
  r = m+r < n ? r : 1 << 30;
  int res = min(l, r);
  cout << res * 10 << endl;
  return 0;
}
