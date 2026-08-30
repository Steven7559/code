#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 5;
int n, op, x, y, m, a[N];
int lb(int x) {
    return x & (-x);
}
void add(int id, int num) {
    while (id <= n) {
        a[id] += num;
        id += lb(id);
    }
}
int sum(int x) {
    int ans = 0;
    while (x) {
        ans += a[x];
        x -= lb(x);
    }
    return ans;
}
signed main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        add(i, x);
    }
    while (m--) {
        cin >> op >> x >> y;
        if (op == 1) {
            add(x, y);
        } else {
            cout << sum(y) - sum(x - 1) << endl;
        }
    }
    return 0;
}
