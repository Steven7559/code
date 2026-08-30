#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 333;
int dp[N][N], n, m, x, y, z;
struct node {
    int t, w;
};
vector< node > v[N];
void dfs(int x, int f) {
    for (auto u : v[x]) {
        if (u.t == f)
            continue;
        dfs(u.t, x);
        for (int i = m; i >= 1; i--) {
            for (int j = i - 1; j >= 0; j--) {
                dp[x][i] = max(dp[x][i], dp[x][i - j - 1] + dp[u.t][j] + u.w);
            }
        }
    }
}
signed main() {
    cin >> n >> m;
    for (int i = 1; i < +n; i++) {
        cin >> x >> y >> z;
        v[x].push_back({y, z});
        v[y].push_back({x, z});
    }
    dfs(1, 0);
    cout << dp[1][m];
    return 0;
}