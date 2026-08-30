#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 41;
int dp[N][N][N][N], a[351], g[5], n, m, x;
signed main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dp[0][0][0][0] = a[1];
    for (int i = 1; i <= m; i++) {
        cin >> x;
        g[x]++;
    }
    for (int i = 0; i <= g[1]; i++) {
        for (int j = 0; j <= g[2]; j++) {
            for (int k = 0; k <= g[3]; k++) {
                for (int p = 0; p <= g[4]; p++) {
                    int r = 1 + i + j * 2 + k * 3 + p * 4;
                    if (i != 0) {
                        dp[i][j][k][p] =
                            max(dp[i][j][k][p], dp[i - 1][j][k][p] + a[r]);
                    }
                    if (j != 0) {
                        dp[i][j][k][p] =
                            max(dp[i][j][k][p], dp[i][j - 1][k][p] + a[r]);
                    }
                    if (k != 0) {
                        dp[i][j][k][p] =
                            max(dp[i][j][k][p], dp[i][j][k - 1][p] + a[r]);
                    }
                    if (p != 0) {
                        dp[i][j][k][p] =
                            max(dp[i][j][k][p], dp[i][j][k][p - 1] + a[r]);
                    }
                }
            }
        }
    }
    cout << dp[g[1]][g[2]][g[3]][g[4]];
    return 0;
}
