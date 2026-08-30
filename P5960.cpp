#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 5;
struct node {
    ll t, w;
};
vector< node > v[N];
ll n, m, dis[N], num[N];
bool f[N], flag = true;
void spfa() {
    flag = 1;
    queue< int > q;
    q.push(0);
    dis[0] = 0;
    f[0] = 1;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        f[x] = 0;
        for (auto u : v[x]) {
            if (dis[u.t] > dis[x] + u.w) {
                dis[u.t] = dis[x] + u.w;
                if (f[u.t] == 0) {
                    q.push(u.t);
                    num[u.t]++;
                    f[u.t] = 1;
                    if (num[u.t] > n - 1) {
                        flag = false;
                        return;
                    }
                }
            }
        }
    }
}
int main() {
    cin >> n >> m;
    memset(dis, 0x3f, sizeof dis);
    for (int i = 1; i <= n; i++) {
        v[0].push_back({i, 0});
    }
    for (ll i = 1; i <= m; i++) {
        ll x, y, w;
        cin >> x >> y >> w;
        v[y].push_back({x, w});
    }
    dis[0] = 0;
    spfa();
    if (!flag)
        cout << "NO";
    else {
        for (int i = 1; i <= n; i++) {
            cout << dis[i] << " ";
        }
    }
    return 0;
}