#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5;
int n, op, x, y, m, t[N], a[N], f[N], l, r, ans[N];
struct node {
    int l, r, pos;
} q[N];
int lb(int x) {
    return x & (-x);
}
void add(int id, int num) {
    while (id <= n) {
        t[id] += num;
        id += lb(id);
    }
}
int sum(int x) {
    int ans = 0;
    while (x) {
        ans += t[x];
        x -= lb(x);
    }
    return ans;
}
bool cmp(node x, node y) {
    if (x.r == y.r)
        return x.l < y.l;
    return x.r < y.r;
}
signed main() {
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
    }
    scanf("%lld", &m);
    for (int i = 1; i <= m; i++) {
        scanf("%lld%lld", &q[i].l, &q[i].r);
        q[i].pos = i;
    }
    sort(q + 1, q + 1 + m, cmp);
    int i = 1, k = 1;
    for (int j = 1; j <= m; j++) {
        while (k <= q[j].r) {
            if (f[a[k]]) {
                add(f[a[k]], -1);
            }
            f[a[k]] = k;
            add(f[a[k]], 1);
            k++;
        }
        ans[q[j].pos] = (sum(q[j].r) - sum(q[j].l - 1));
    }
    for (int i = 1; i <= m; i++) {
        printf("%lld\n", ans[i]);
    }
    return 0;
}