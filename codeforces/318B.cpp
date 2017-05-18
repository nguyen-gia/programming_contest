#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int a[300000], b[300000];
    int i, j, k, l;
    long long sum = 0;

    cin >> s;
    std::size_t found = s.find("heavy");
    if (found == string::npos){
        cout << 0 << endl;
        return 0;
    }
    a[0] = (int) found;
    i=0;
    j=0;
    while (found != string::npos){
        found = s.find("heavy", found+1);
        if(found == string::npos) break;
        i++;
        a[i] = (int) found;
    }

    found = s.find("metal");
     if (found == string::npos){
        cout << 0 << endl;
        return 0;
    }
    b[0] = int(found);
    while (found != string::npos){
        found = s.find("metal", found+1);
        if(found == string::npos) break;
        j++;
        b[j] = (int) found;
    }
    l=0;
    for (k=0; k<=i; k++){
        while (b[l]<a[k]) l++;
        if (l<=j)
            sum += j-l+1;
    }
    cout << sum << endl;
    return 0;
}
