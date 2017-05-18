#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  int left = 0, right = n-1;
  while (s[left] == '<' && left <= n-1) {
    left++;
  }
  while (s[right] == '>' && right >= 0) right --;
  cout << left + n - right - 1 << endl;
  return 0;
}
