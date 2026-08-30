#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7;
struct node {
    int a[3][3] = {0};
} res, a;
void m(node &c, const node &a, const node &b) {
    int tmp[3][3] = {0};
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            for (int k = 1; k <= 2; k++) {
                tmp[i][j] = (tmp[i][j] + a.a[i][k] * b.a[k][j]) % mod;
            }
        }
    }
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
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
    a.a[1][1] = a.a[1][2] = a.a[2][1] = 1;
    res.a[1][1] = 1;
    res.a[1][2] = 1;
}
int n;
signed main() {
    init();
    cin >> n;
    if (n <= 2) {
        cout << 1;
        return 0;
    } else {
        f(n - 2, res, a);
        cout << res.a[1][1];
    }
    return 0;
}