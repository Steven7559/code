#include <bits/stdc++.h>
#define int long long
using namespace std;
string s, t;
int a = 1, b = 1;
signed main() {
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++) {
        a *= s[i] - 'A' + 1;
    }
    for (int i = 0; i < t.size(); i++) {
        b *= t[i] - 'A' + 1;
    }
    a %= 47;
    b %= 47;
    if (a == b) {
        cout << "GO";
    } else {
        cout << "STAY";
    }
    return 0;
}