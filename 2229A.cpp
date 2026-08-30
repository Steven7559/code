#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1005;
int t, n, a, maxn, minn;
signed main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        maxn = INT_MIN, minn = INT_MAX;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a;
            minn = min(minn, a);
            maxn = max(maxn, a);
        }
        cout << (maxn - minn + 1) / 2 << '\n';
    }
    return 0;
}