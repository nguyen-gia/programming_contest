#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, res=0, prev=2;
  string s;

  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> s;
    if (s[0] - '0' == prev || i==0)
    {
      res++;
      prev = s[1]-'0';
    }
  }
  cout << res << endl;
  return 0;
}
