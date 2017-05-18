#include <iostream>

using namespace std;

int main()
{
  long long n, k;
  cin >> n;
  cin >> k;
  if( k <= (n-1 + n%2)/2 +1)
  cout << 1+2*(k-1) << endl;
  else
  cout << 2*(k-((n-1+n%2)/2+1)-1)+2 << endl;
  return 0;
}
