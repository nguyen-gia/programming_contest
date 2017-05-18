#include <string>
using namespace std;

class  DoubleString {
  public:
    string check(string S);
};

string DoubleString::check(string s) {
  if (s.length() % 2 == 1) return "not square";
  if (s.substr(0, s.length()/2) == s.substr(s.length()/2, s.length()/2)) return "square";
  return "not square";
}
