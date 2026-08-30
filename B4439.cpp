#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 5;
int n, p[N], x[N];
int cnt, ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> p[i];
        if (x[i] >= 500 and p[i] < 500) {
            cnt++;
            ans += p[i];
        }
    }
    cout << cnt << ' ' << ans;
    return 0;
}
