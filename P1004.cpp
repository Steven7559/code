#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[15][15], n, dp[15][15][15][15];
signed main() {
    cin >> n;
    while (1) {
        int x, y, m;
        cin >> x >> y >> m;
        if (x == 0 && y == 0 && m == 0)
            break;
        else
            a[x][y] = m;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                for (int t = 1; t <= n; t++) {
                    dp[i][j][k][t] =
                        max(max(dp[i - 1][j][k - 1][t], dp[i - 1][j][k][t - 1]),
                            max(dp[i][j - 1][k - 1][t],
                                dp[i][j - 1][k][t - 1])) +
                        a[i][j] + a[k][t];
                    if (i == k and j == t)
                        dp[i][j][k][t] -= a[i][j];
                }
            }
        }
    }
    cout << dp[n][n][n][n];
    return 0;
}
