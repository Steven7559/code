#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e4 + 5;
int n, a[N], ans;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    bool f = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] < a[i - 1])
            f |= 1;
        if (a[i] > a[i - 1] and f) {
            f &= 0;
            ans++;
        }
    }
    cout << ans;
    return 0;
}