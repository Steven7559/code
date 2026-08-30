#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 505;
int f[N][N][5], a[N], b[N], n, sum[N], c;  // i->j min ev money,0 no turn,1 turn
signed main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n >> c;
    memset(f, 0x3f, sizeof f);
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        sum[i] = sum[i - 1] + b[i];
    }
    f[c][c][0] = f[c][c][1] = 0;
    for (int l = 2; l <= n; l++) {
        for (int i = 1; i + l - 1 <= n; i++) {
            int j = i + l - 1;
            f[i][j][0] = min(
                f[i + 1][j][0] + (a[i + 1] - a[i]) * (sum[n] - sum[j] + sum[i]),
                f[i + 1][j][1] +
                    (a[j] - a[i]) * (sum[n] - sum[j] + sum[i]));  // i->j
            f[i][j][1] =
                min(f[i][j - 1][0] +
                        (a[j] - a[i]) * (sum[n] + sum[i - 1] - sum[j - 1]),
                    f[i][j - 1][1] + (a[j] - a[j - 1]) * (sum[n] + sum[i - 1] -
                                                          sum[j - 1]));  // j->i
        }
    }
    cout << min(f[1][n][0], f[1][n][1]) << endl;
    return 0;
}