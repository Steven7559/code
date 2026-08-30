#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
int n, a[N], k, maxn = -1, ans = 0;
signed main() {
    //	freopen("balance.in","r",stdin);
    //	freopen("balance.out","w",stdout);
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        maxn = max(maxn, a[i]);
    }
    for (int i = 1; i <= n; i++) {
        int tmp = maxn - a[i];
        if (tmp % k != 0) {
            cout << "NO";
            return 0;
        } else {
            ans += tmp / k;
        }
    }
    cout << "YES " << ans;
    return 0;
}