#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5 + 5;
int n, m, b, a[N], dis[N], r = -1, l = -1, mid, ans = -1;
bool f[N];
struct node {
    int t, w;
    bool operator<(const node &a) const {
        return a.w < w;
    }
};
vector< node > v[N];
priority_queue< node > q;
int check(int x) {
    for (int i = 1; i <= n; i++) {
        f[i] = 0;
        dis[i] = 1e18;
    }
    dis[1] = 0;
    q.push({1, 0});
    while (!q.empty()) {
        int u = q.top().t;
        q.pop();
        if (f[u])
            continue;
        f[u] = 1;
        for (auto i : v[u]) {
            int t = i.t;
            if (a[t] > x)
                continue;
            if (dis[i.t] > dis[u] + i.w) {
                dis[i.t] = dis[u] + i.w;
                if (f[i.t] == 0) {
                    q.push({t, dis[t]});
                }
            }
        }
    }
    if (dis[n] <= b)
        return 1;
    else
        return 0;
}
signed main() {
    cin >> n >> m >> b;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        r = max(r, a[i]);
    }
    for (int i = 1; i <= m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        v[x].push_back({y, z});
        v[y].push_back({x, z});
    }
    l = max(a[1], a[n]);
    while (l <= r) {
        mid = l + r >> 1;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        } else
            l = mid + 1;
    }
    if (ans != -1)
        cout << ans;
    else
        cout << "AFK";
    return 0;
}