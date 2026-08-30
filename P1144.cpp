#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 5e6 + 5, mod = 100003;
LL dis[N], ans[N], n, m, x, y;
bool f[N];
vector< LL > v[N];
void spfa() {
    queue< int > q;
    q.push(1);
    dis[1] = 0;
    f[1] = 1;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        f[x] = 0;
        for (auto u : v[x]) {
            if (dis[u] > dis[x] + 1) {
                ans[u] = ans[x];
                dis[u] = dis[x] + 1;
                q.push(u);
                f[u] = 1;
            } else if (dis[u] == dis[x] + 1)
                ans[u] = (ans[u] + ans[x]) % mod;
        }
    }
}
int main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    memset(dis, 0x3f, sizeof dis);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ans[1] = 1;
    spfa();
    for (int i = 1; i <= n; i++) {
        cout << ans[i] % mod << endl;
    }
    return 0;
}