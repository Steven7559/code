#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7;
int n, k;
struct node {
    int a[105][105];
} res, tmp, a;
void m(node &c, const node &a, const node &b) {
    int tmp[105][105] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                tmp[i][j] = (tmp[i][j] + a.a[i][k] * b.a[k][j]) % mod;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            c.a[i][j] = tmp[i][j];
        }
    }
}
void f(int x) {
    node b = a;
    while (x) {
        if (x & 1) {
            node tmp = res;
            m(res, tmp, b);
        }
        node tmp = b;
        m(b, tmp, tmp);
        x /= 2;
    }
}
signed main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        res.a[i][i] = 1;
        for (int j = 1; j <= n; j++) {
            cin >> a.a[i][j];
        }
    }
    f(k);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << res.a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}