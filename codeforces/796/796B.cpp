#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, m, k;
  cin >> n >> m >> k;
  int a[n];
  memset(a, 0, sizeof(a));
  for (int i=0; i<m; i++) {
    int tmp;
    cin >> tmp;
    a[tmp - 1] = 1;
  }
  int index = 1;
  for (int i=0; i < k; i++) {
    int u, v;
    cin >> u >> v;
    if (u == index) {
      if(a[index -1] == 1) {
        break;
      } else {
        index = v;
      }
    } else if (v == index) {
      if(a[index -1] == 1) {
        break;
      } else {
        index = u;
      }
    }
  }
  cout << index << endl;
  return 0;
}
