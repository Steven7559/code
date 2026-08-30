#include <bits/stdc++.h>
using namespace std;
const int N = 2e7 + 5;
int n, cnt[N], maxn = 0;
signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        maxn = max(maxn, x);
    }
    int ans = 0;
    ans += maxn * 10;
    for (int i = 1; i <= maxn; i++) {
        if (cnt[i])
            ans += 5;
        ans += cnt[i];
    }
    cout << ans;
    return 0;
}