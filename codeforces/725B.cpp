#include <iostream>
using namespace std;

int time(char c) {
  switch (c) {
    case 'f': return 1;
    case 'e': return 2;
    case 'd': return 3;
    case 'a': return 4;
    case 'b': return 5;
    case 'c': return 6;
    default: return 0;
  }
}
int main() {
  unsigned long long n;
  char c;
  cin >> n >> c;
  cout << ((n-1) / 4) * 16 + ((n-1)%2)*7 + time(c) << endl;
  return 0;
}
