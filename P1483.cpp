// Problem: P1483 序列变换
// URL: https://www.luogu.com.cn/problem/P1483
// Memory Limit: 125 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 5;
int a[N], b[N], n, m;
void out(int i) {
    if (i == 0) {
        cout << 0 << endl;
        return;
    }
    int x = a[i];
    for (int j = 1; j * j <= i; j++) {
        if (i % j == 0) {
            x += b[j];
            if (j != i / j)
                x += b[i / j];
        }
    }
    cout << x << endl;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    while (m--) {
        int x, y, op;
        cin >> op;
        if (op == 1) {
            cin >> x >> y;
            b[x] += y;
        } else {
            cin >> x;
            out(x);
        }
    }
    return 0;
}
