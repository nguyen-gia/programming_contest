#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <string.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int t[n];
  int a[n];
  int b[n];
  for (int i=0; i<n; i++){
    cin >> t[i];
  }
  memset(b, 0, sizeof(b));
  for (int i=0; i<n; i++) {
    memset(a, 0, sizeof(a));
    int max = 0;
    int c = -1;
    for (int j=i; j<n; j++) {
      a[t[j]-1]++;
      if (a[t[j]-1] > max || (a[t[j]-1] == max && t[j] < c)) {
        max = a[t[j]-1];
        c = t[j];
      }
      b[c-1]++;
    }
  }
  for (int i=0; i<n; i++){
    cout << b[i] << " ";
  }
  cout << endl;
}
