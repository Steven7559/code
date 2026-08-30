#include <bits/stdc++.h>
using namespace std;
const long long mod = 998244353;
long long n, m, s, x, y, dep[500005], f[500005][25], a, b, c, d,
    sum[100005][51], num[100005];
vector< long long > v[500005];
void dfs(long long x, long long fa) {
    dep[x] = dep[fa] + 1;
    int p = 1;
    for (int i = 1; i <= 50; i++) {
        p = p * dep[x] % mod;
        sum[x][i] = sum[fa][i] + p % mod;
    }
    f[x][0] = fa;
    for (long long i = 1; i <= 18; i++) {
        f[x][i] = f[f[x][i - 1]][i - 1];
    }
    for (auto u : v[x]) {
        if (u == fa) {
            continue;
        }
        dfs(u, x);
    }
}
long long lca(long long x, long long y) {
    if (dep[x] < dep[y]) {
        swap(x, y);
    }
    for (long long i = 18; i >= 0; i--) {
        if (dep[f[x][i]] >= dep[y]) {
            x = f[x][i];
        }
    }
    if (x == y) {
        return x;
    }
    for (long long i = 18; i >= 0; i--) {
        if (f[x][i] != f[y][i]) {
            x = f[x][i];
            y = f[y][i];
        }
    }
    return f[x][0];
}
int main() {
    cin >> n;
    for (long long i = 1; i < n; i++) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dep[0] = -1;
    dfs(1, 0);
    cin >> m;
    while (m--) {
        cin >> a >> b >> c;
        long long t = lca(a, b);
        long long ab = sum[a][c] % mod + sum[b][c] % mod - 2 * sum[t][c] % mod;
        ab %= mod;
        cout << ab << endl;
    }
    return 0;
}