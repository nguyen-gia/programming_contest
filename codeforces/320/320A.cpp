#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  int i=0;
  cin >> s;
  while (i< s.length())
  {
    if (s[i] == '1')
    {
      if (i == s.length()-1){
        cout << "YES" << endl;
        return 0;
      }
      if(s[i+1] == '1'){
        i++;
        continue;
      }
      else
      {
        if ((s[i+1] == '4' || s[i+1] == '1') && i+1 == s.length() -1)
        {
          cout << "YES" << endl;
          return 0;
        }
        if (s[i+1] == '4' && s[i+2] == '4'){
          if (i+2 == s.length()-1)
          {
            cout << "YES" << endl;
            return 0;
          }
          else{
            i+=3;
            continue;
          }
        }
        else if (s[i+1]== '4' && s[i+2]== '1'){
          if (i+2 == s.length()-1)
          {
            cout << "YES" << endl;
            return 0;
          }
          else{
            i+=2;
            continue;
          }
        }
        else {
          cout << "NO" << endl;
          return 0;
        }
      }

    }
    else
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
