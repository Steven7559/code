#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5005, s = 1;
struct node {
    int t, w;
    bool operator<(const node &a) const {
        return a.w < w;
    }
};
int inf = 0x3f3f3f3f3f3f3f3f;
vector< node > v[N];
int n, m, f[N], dis[N], b[N], w[N], en[N], be[N], ans = inf;
priority_queue< node > q;
void dij() {
    memset(f, 0, sizeof(f));
    memset(dis, 0x3f, sizeof(dis));
    dis[s] = 0;
    q.push({s, 0});
    while (!q.empty()) {
        int u = q.top().t;
        q.pop();
        if (f[u])
            continue;
        f[u] = 1;
        for (auto x : v[u]) {
            if (dis[x.t] > dis[u] + x.w) {
                dis[x.t] = dis[u] + x.w;
                if (f[x.t] == 0) {
                    q.push({x.t, dis[x.t]});
                }
            }
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> be[i] >> en[i] >> w[i] >> b[i];
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            v[j].clear();
        for (int j = 1; j <= m; j++) {
            // 建图
            if (i != j and b[j] <= b[i]) {
                v[be[j]].push_back({en[j], w[j]});
                v[en[j]].push_back({be[j], w[j]});
            }
        }
        // 建免费边
        v[be[i]].push_back({en[i], 0});
        v[en[i]].push_back({be[i], 0});
        dij();
        ans = min(ans, dis[n]);
    }
    if (ans == inf)
        cout << "-1" << endl;
    else
        cout << ans << endl;
    return 0;
}