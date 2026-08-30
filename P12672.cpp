#include <bits/stdc++.h>
#define ll long long
using namespace std;
int T;
string s;
int main() {
    cin >> T;
    while (T--) {
        cin >> s;
        int l = s.size();
        int t1 = 0, t2 = 0;
        for (int i = 0; i <= l - 1; i++) {
            if (s.substr(i, 3) == "LGR")
                t1++;
            if (s.substr(i, 3) == "CSP")
                t2++;
        }
        cout << min(ceil(t1 / 2.0), ceil(t2 / 2.0)) << endl;
    }
    return 0;
}