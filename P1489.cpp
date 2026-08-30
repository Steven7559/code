#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 205, M = 8005;
int n, a[N], sum, minn = -1e9, ans;
bool dp[N][M];  // can i guns j blood be calced?
signed main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int k = n / 2; k >= 1; k--) {
            for (int j = sum; j >= a[i]; j--) {
                if (dp[k - 1][j - a[i]]) {
                    dp[k][j] = true;
                }
            }
        }
    }
    int ans = 0, minn = sum;
    for (int j = 0; j <= sum; j++) {
        if (dp[n / 2][j]) {
            if (abs(2 * j - sum) < minn) {
                minn = abs(2 * j - sum);
                ans = j;
            }
        }
    }
    cout << min(ans, sum - ans) << ' ' << max(ans, sum - ans);
    return 0;
}