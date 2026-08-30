// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 5;
string s;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> s;
    if (s[0] == '-')
        cout << '-';
    bool f = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '-')
            break;
        if (s[i] != '0')
            f |= 1;
        if (f)
            cout << s[i];
    }
    if (!f)
        cout << 0;
    return 0;
}
