#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 19930726;
int a[1000005], cnt[1000005], n, k;
string s;
int ksm(int x, int y) {
    int res = 1;
    x %= mod;
    while (y > 0) {
        if (y & 1)
            res = res * x % mod;
        x = x * x % mod;
        y >>= 1;
    }
    return res;
}
signed main() {
    cin >> n >> k >> s;
    int l = 1, r = 0;
    for (int i = 1; i <= n; i++) {
        if (i <= r) {
            a[i] = min(a[l + r - i], r - i + 1);
        } else {
            a[i] = 1;
        }
        while (i - a[i] >= 1 and i + a[i] <= n and
               s[i - a[i] - 1] == s[i + a[i] - 1]) {
            a[i]++;
        }
        if (i + a[i] - 1 > r) {
            l = i - a[i] + 1;
            r = i + a[i] - 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] > 0)
            cnt[a[i]]++;
    }
    for (int i = n - 1; i >= 1; i--) {
        cnt[i] += cnt[i + 1];
    }
    int ans = 1, t = k;
    for (int i = n; i >= 1 and t > 0; i--) {
        if (cnt[i] == 0) {
            continue;
        }
        if (t >= cnt[i]) {
            ans = ans * ksm(2 * i - 1, cnt[i]) % mod;
            t -= cnt[i];
        } else {
            ans = ans * ksm(2 * i - 1, t) % mod;
            t = 0;
            break;
        }
    }
    if (t > 0) {
        cout << -1 << endl;
    } else {
        cout << ans % mod << endl;
    }
    return 0;
}