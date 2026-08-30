#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int m, t, s;
    cin >> m >> t >> s;
    if (t == 0)
        cout << "0\n";
    else {
        int ans = m - s / t;
        if (s % t != 0)
            ans--;
        cout << max(0ll, ans) << '\n';
    }
    return 0;
}
