// Problem: P5728 【深基5.例5】旗鼓相当的对手
// URL: https://www.luogu.com.cn/problem/P5728
// Memory Limit: 125 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e3 + 5;
struct t {
    int a, b, c, s;
} a[N];
int n;
bool f(t x, t y) {
    int a = abs(x.a - y.a);
    int b = abs(x.b - y.b);
    int c = abs(x.c - y.c);
    int s = abs(x.s - y.s);
    return a <= 5 and b <= 5 and c <= 5 and s <= 10;
}
int ans;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].a >> a[i].b >> a[i].c;
        a[i].s = a[i].a + a[i].b + a[i].c;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            ans += f(a[i], a[j]);
        }
    }
    cout << ans << endl;
    return 0;
}
