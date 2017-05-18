#include <iostream>
using namespace std;

int main() {
  int first, second;
  string s;
  cin >> s;
  for (int i=0; i<26; i++) {
    bool found = false;
    for (int j=i+1; j<27; j++) {
      if (s[i] == s[j]) {
        first = i;
        second = j;
        found = true;
        break;
      }
    }
    if (found) break;
  }

  if (second - first <= 1) {
    cout << "Impossible" << endl;
    return 0;
  }
  char up[14], down[14];
  int d = (second - first -1) / 2;
  up[12 - d] = s[first];
  //cout << "up[" << 12-d << "] = " << s[first] << endl;
  for (int i=0; i<d; i++) {
    up[13-d+i] = s[first+i+1];
    //cout << "up[" <<13-d+i << "] = " << s[first+i+1] << endl;
  }
  for (int i=first+d+1; i<second; i++) {
    down[12 - (i - first - d - 1)] = s[i];
    //cout << "down[" <<12 - (i - first - d - 1) << "] = "  << s[i] << endl;
  }
  for (int i=second+1; i<s.length(); i++) {
    if (11-d - (i - second -1) >= 0) {
      up[11-d - (i - second -1)] = s[i];
      //cout << "up[" <<11-d - (i - second -1) << "] = " <<  s[i] << endl;
    } else {
      down[-(11-d - (i - second -1))-1] = s[i];
      //cout << "down[" <<-(11-d - (i - second -1))-1 << "] = "  << s[i] << endl;
    }
  }
  int last = 11-d - (s.length() - 1 - second -1);
  //cout << "last = " << last << endl;
  if (last > 0) {
    for (int i=0; i<first; i++) {
      if (last - i - 1 >= 0) {
        up[last - i - 1] = s[i];
        //cout << "up[" <<last - i - 1 << "] = " <<  s[i] << endl;
      } else {
        down[-(last - i - 1)-1] = s[i];
        //cout << "down[" <<-(last - i - 1)-1 << "] = "  << s[i] << endl;
      }
    }
  } else {
    last = -last;
    for (int i=0; i<first; i++) {
        down[last + i] = s[i];
        //cout << "down[" <<last + i + 1<< "] = " <<  s[i] << endl;
    }
  }
  up[13] = '\0';
  down[13] = '\0';
  cout << up << endl;
  cout << down << endl;
  return 0;
}
