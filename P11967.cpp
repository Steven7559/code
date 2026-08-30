#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5;
int n, m, dep[N], f[N][25], ans, sum[N];
vector< int > v[N];
void dfs(int x, int fa) {
    dep[x] = dep[fa] + 1;
    f[x][0] = fa;
    for (int i = 1; i <= 18; i++) {
        f[x][i] = f[f[x][i - 1]][i - 1];
    }
    for (auto u : v[x]) {
        if (u == fa) {
            continue;
        }
        dfs(u, x);
    }
}
int lca(int x, int y) {
    if (dep[x] < dep[y]) {
        swap(x, y);
    }
    for (int i = 18; i >= 0; i--) {
        if (dep[f[x][i]] >= dep[y]) {
            x = f[x][i];
        }
    }
    if (x == y) {
        return x;
    }
    for (int i = 18; i >= 0; i--) {
        if (f[x][i] != f[y][i]) {
            x = f[x][i];
            y = f[y][i];
        }
    }
    return f[x][0];
}
int dis(int x, int y) {
    return dep[x] + dep[y] - 2 * dep[lca(x, y)];
}
bool find(int a, int z, int k) {
    return dis(a, z) + dis(a, k) == dis(z, k);
}
void dfs2(int x, int s) {
    for (auto u : v[x]) {
        if (u == s)
            continue;
        dfs2(u, x);
        sum[x] += sum[u];
    }
    return;
}
signed main() {
    scanf("%lld%lld", &n, &m);
    for (int i = 1; i < n; i++) {
        int x, y;
        scanf("%lld%lld", &x, &y);
        v[y].push_back(x);
        v[x].push_back(y);
    }
    dfs(1, 0);
    for (int i = 1; i <= m; i++) {
        int s, t;
        scanf("%lld%lld", &s, &t);
        int l = lca(s, t);
        int fa = f[l][0];
        sum[s]++;
        sum[t]++;
        sum[l]--;
        sum[fa]--;
    }
    int s, t;
    scanf("%lld%lld", &s, &t);
    int l = lca(s, t);
    dfs2(1, 0);
    while (s != l) {
        if (!sum[s])
            ans++;
        s = f[s][0];
    }
    while (t != l) {
        if (!sum[t])
            ans++;
        t = f[t][0];
    }
    if (!sum[l])
        ans++;
    cout << ans;
    return 0;
}