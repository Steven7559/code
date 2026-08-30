#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 5;
int n, a[N], cnt[N], ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    int t;
    cin >> t;
    while (t--) {
        ans = 1;
        memset(cnt, 0, sizeof cnt);
        cin >> n;
        for (int i = 1; i <= n; i++) {
            char c;
            cin >> c;
            a[i] = (c == '1');
            if (a[i] == 0) {
                cnt[i] = 1;
            }
            cnt[i] += cnt[i - 1];
        }
        for (int i = 1; i <= n; i++) {
            if (a[i] != 1)
                continue;
            if (cnt[i] == 1)
                ans += 2;
            else
                ans += cnt[i] * cnt[i];
        }
        cout << ans << endl;
    }
    return 0;
}