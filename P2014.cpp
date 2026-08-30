#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 333;
int dp[N][N], n, m, x, y;
struct node {
    int t, w;
};
vector< node > v[N];
void dfs(int x) {
    for (auto u : v[x]) {
        dfs(u.t);
        for (int i = m + 1; i > 0; i--) {
            for (int j = 1; j < i; j++) {
                dp[x][i] = max(dp[x][i], dp[x][i - j] + dp[u.t][j] + u.w);
            }
        }
    }
}
signed main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        v[x].push_back({i, y});
    }
    dfs(0);
    cout << dp[0][m + 1];
    return 0;
}
