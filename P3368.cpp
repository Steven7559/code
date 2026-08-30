#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 5;
int n, op, x, y, m, a[N], t[N], k;
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
signed main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        add(i, a[i] - a[i - 1]);
    }
    while (m--) {
        cin >> op;
        if (op == 1) {
            cin >> x >> y >> k;
            add(x, k);
            add(y + 1, -k);
        } else {
            cin >> k;
            cout << sum(k) << endl;
        }
    }
    return 0;
}
