#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 2005;
LL n, a[N], sum[N], dp[N][N], ans = 0;  // from i to j min cost
int main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i + n] = a[i];
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n * 2; i++) {
            int j = i + len - 1;
            for (int k = i; k <= j - 1; k++) {
                dp[i][j] = max(dp[i][j], dp[i][k] + dp[k + 1][j] +
                                             a[i] * a[k + 1] * a[j + 1]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dp[i][i + n - 1]);
    }
    cout << ans << endl;
    return 0;
}