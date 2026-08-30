#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 305;
int n, m[N], sum[N], dp[N][N], ans = 9999999;  // from i to j min cost
int main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    memset(dp, 0x3f, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        cin >> m[i];
        m[i + n] = m[i];
    }
    for (int i = 1; i <= 2 * n; i++) {
        sum[i] = sum[i - 1] + m[i];
        dp[i][i] = 0;
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n * 2; i++) {
            int j = i + len - 1;
            for (int k = i; k <= j - 1; k++) {
                dp[i][j] = min(dp[i][j],
                               dp[i][k] + dp[k + 1][j] + sum[j] - sum[i - 1]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        ans = min(ans, dp[i][i + n - 1]);
    }
    cout << ans << endl;
    //===================================
    ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = 0;
        }
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n * 2; i++) {
            int j = i + len - 1;
            for (int k = i; k <= j - 1; k++) {
                dp[i][j] = max(dp[i][j],
                               dp[i][k] + dp[k + 1][j] + sum[j] - sum[i - 1]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dp[i][i + n - 1]);
    }
    cout << ans << endl;
    return 0;
}