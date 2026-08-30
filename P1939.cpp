#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7;
struct node {
    int a[4][4] = {0};
} res, a;
void m(node &c, const node &a, const node &b) {
    int tmp[4][4] = {0};
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int k = 1; k <= 3; k++) {
                tmp[i][j] = (tmp[i][j] + a.a[i][k] * b.a[k][j]) % mod;
            }
        }
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            c.a[i][j] = tmp[i][j];
        }
    }
}
void f(int x, node &res, const node &a) {
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
void init() {
    a.a[1][1] = 1;
    a.a[1][3] = 1;
    a.a[2][1] = 1;
    a.a[3][2] = 1;
    res.a[1][1] = 1;
    res.a[1][2] = 1;
    res.a[1][3] = 1;
}
int T, n;
signed main() {
    init();
    cin >> T;
    while (T--) {
        cin >> n;
        if (n <= 3) {
            cout << 1 << endl;
            continue;
        }
        node t1 = res, t2 = a;
        f(n - 3, t1, t2);
        cout << t1.a[1][1] << endl;
    }
    return 0;
}