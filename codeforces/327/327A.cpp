#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
  int n, f[105];
  memset(f, 0, sizeof(f));

  int a, s=0;
  cin >> n;
  for (int i=1; i<=n; i++){
    cin >> a;
    if (a==0)
    s++;
    f[i]=s;
  }

  s = 0;
  for(int i=1; i<=n; i++){
    for (int j=i; j<=n; j++){
      if(i==1) a= f[j]+ n-j -f[n] + f[j];
      else a = i-1-f[i-1] + f[j]-f[i-1] + n-j -f[n] + f[j];
      //cout << i <<" "<< j << " " << a << endl;
      if(a>s)
      s=a;
    }
  }
  cout << s << endl;
  return 0;
}
