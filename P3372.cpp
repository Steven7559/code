#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 5;
int a[N], w[4 * N];
void pushup(int u) {
    w[u] = w[u * 2] + w[u * 2 + 1];
}
void build(int u, int l, int r) {
    if (l == r) {
        w[u] = a[l];
        return;
    } else {
        int mid = (l + r) / 2;
        build(u * 2, l, mid);
        build(u * 2 + 1, mid + 1, r);
        pushup(u);
    }
}
bool ck(int l, int r, int ll, int rr) {
    return (l <= ll) and (rr <= r);
}
bool ck1(int l, int r, int ll, int rr) {
    return (ll > r) or (rr < l);
}
int t[N * 4];
void mkt(int u, int len, int x) {
    t[u] += x;
    w[u] += len * x;
}
void pushdown(int u, int l, int r) {
    int mid = (l + r) / 2;
    mkt(u * 2, mid - l + 1, t[u]);
    mkt(u * 2 + 1, r - mid, t[u]);
    t[u] = 0;
}
int q(int u, int ll, int rr, int l, int r) {
    if (ck(l, r, ll, rr))
        return w[u];
    else if (!ck1(ll, rr, l, r)) {
        int mid = (ll + rr) / 2;
        pushdown(u, ll, rr);
        return q(u * 2, ll, mid, l, r) + q(u * 2 + 1, mid + 1, rr, l, r);
    } else
        return 0;
}
void upd(int u, int ll, int rr, int l, int r, int x) {
    if (ck(l, r, ll, rr))
        mkt(u, rr - ll + 1, x);
    else if (!ck1(l, r, ll, rr)) {
        int mid = (ll + rr) / 2;
        pushdown(u, ll, rr);
        upd(u * 2, ll, mid, l, r, x);
        upd(u * 2 + 1, mid + 1, rr, l, r, x);
        pushup(u);
    }
}
int n, m;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    while (m--) {
        int op, x, y;
        int k;
        cin >> op;
        if (op == 1) {
            cin >> x >> y >> k;
            upd(1, 1, n, x, y, k);
        } else {
            cin >> x >> y;
            cout << q(1, 1, n, x, y) << '\n';
        }
    }
    return 0;
}