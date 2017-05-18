#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  int x12 = a+b-c;
  int x13 = a+c-b;
  int x23 = b-a+c;

  if(x12>=0 && x13 >=0 && x23>=0 && x12%2==0 && x13%2==0 && x23%2==0)
  cout << x12/2 << " " << x23/2 << " " << x13/2 << endl;
  else
  cout << "Impossible" << endl;
  return 0;
}
