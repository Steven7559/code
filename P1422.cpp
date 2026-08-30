#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e4 + 5;
int n, f[N];
double ans;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
    }
    for (int i = 1; i <= 150; i++) {
        ans += f[i] * 1.0 * 0.4463;
    }
    for (int i = 151; i <= 400; i++) {
        ans += f[i] * 1.0 * 0.4663;
    }
    for (int i = 401; i <= 10000; i++) {
        ans += f[i] * 1.0 * 0.5663;
    }
    printf("%.1lf", ans);
    return 0;
}
