#include <bits/stdc++.h>
using namespace std;
const int N = 305;
int a[N], c[N], dp[N][N];  // i个组 选到j
int n;
bool cmp(int x, int y) {
    return x > y;
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    sort(c + 1, c + 1 + n, cmp);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int maxn = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= j; k++) {
                dp[i][j] =
                    max(dp[i][j], dp[i - 1][j - k] + a[k] +
                                      int(k != 1) * (c[n - i + 1] - c[i]));
            }
        }
        maxn = max(maxn, dp[i][n]);
    }
    cout << maxn;
    return 0;
}