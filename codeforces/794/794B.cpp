#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  double n, h;
  cin >> n >> h;
  double prev = 0;
  for (int i=0; i<n-1; i++) {
    prev = h * h / n + prev;
    cout << setprecision(32) << sqrt(prev) << endl;
  }
  return 0;
}
