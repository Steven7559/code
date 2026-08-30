#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 1005;
int n, a[N], sum[N], dp[N][N];
string s;
int main() {
    memset(dp, 0x3f, sizeof dp);
    cin >> s;
    n = s.size();
    for (int i = 1; i <= n; i++) {
        a[i] = s[i - 1] - 'A';
        dp[i][i] = 1;
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n; i++) {
            int j = i + len - 1;
            if (a[i] == a[j])
                dp[i][j] = min(dp[i][j], dp[i][j - 1]);
            for (int k = i; k <= j - 1; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j]);
            }
        }
    }
    cout << dp[1][n];
    return 0;
}
