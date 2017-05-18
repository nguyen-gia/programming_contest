#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int a, b, c, n;
  cin >> a >> b >> c >> n;
  long long res = 0;
  for (int i=0, t; i<n; i++) {
    cin >> t;
    if (t>b && t <c) res ++;
  }
  cout << res << endl;
  return 0;
}
