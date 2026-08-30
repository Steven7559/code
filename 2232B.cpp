#include <bits/stdc++.h>
#define int long long
using namespace std;
#define N 200005
int t, a[N], sum[N], n;
signed main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }
        int minn = LLONG_MAX;
        for (int i = 1; i <= n; i++) {
            minn = min(minn, sum[i] / i);
            cout << minn << ' ';
        }
        cout << '\n';
    }
    return 0;
}