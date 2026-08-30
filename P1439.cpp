#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
int n, a[N], b[N], f[N], l, dp[N];
signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[a[i]] = i;
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        b[i] = f[b[i]];
    }
    dp[1] = b[1];
    int len = 1;
    for (int i = 2; i <= n; i++) {
        if (b[i] > dp[len])
            dp[++len] = b[i];
        else {
            int pos = lower_bound(dp + 1, dp + 1 + len, b[i]) - dp;
            dp[pos] = b[i];
        }
    }
    cout << len;
    return 0;
}
