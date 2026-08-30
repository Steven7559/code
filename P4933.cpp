#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e4 + 5, mod = 998244353;
int dp[1005][N * 2], n, a[N], ans = 0;
signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = i - 1; j >= 1; j--) {
            int t = a[i] - a[j] + N;
            dp[i][t] += dp[j][t] + 1;
            dp[i][t] %= mod;
            ans += dp[j][t];
            ans %= mod;
        }
    }
    cout << (ans + n * (n + 1) / 2) % mod << endl;
    return 0;
}