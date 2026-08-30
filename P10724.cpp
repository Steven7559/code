#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, a[100005];
map< ll, ll > dp;
ll ans;
ll f(ll n) {
    ll x = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            x ^= 1 << i;
            n /= i;
        }
    }
    if (n != 1)
        x ^= 1 << n;
    return x;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    dp[0] = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = f(a[i]);
        a[i] ^= a[i - 1];
        ans += dp[a[i]];
        dp[a[i]]++;
    }
    cout << ans << endl;
    return 0;
}