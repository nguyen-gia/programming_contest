#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int n, a[8], t;
  memset(a, 0, sizeof(a));
  cin >> n;
  for (int i=0; i<n; i++){
    cin >> t;
    a[t]++;
  }
  if (a[5]!=0 || a[7]!=0){
    cout << -1 << endl;
  }
  else{
    if((a[1]!= a[3]+a[2]) || (a[1]!= a[4]+a[6]) || a[3] > a[6] || a[4] > a[2]){
      cout << -1 << endl;
    }
    else {
      for (int i=0; i< a[4] ; i++){
        cout << 1 << " " << 2 << " " << 4 << endl;
      }

      a[1] -= a[4];

      for (int i=0; i< a[1]-a[3] ; i++){
        cout << 1 << " " << 2 << " "  << 6 << endl;
      }

      for (int i=0; i< a[3] ; i++){
        cout << 1 << " " << 3 << " " << 6 << endl;
      }
    }
  }
  return 0;
}
