#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[999]{0}, n;
    n = 10;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x, ans = 0;
    cin >> x;
    x += 30;
    for (int i = 0; i < n; i++) {
        if (x >= a[i])
            ans++;
    }
    cout << ans;
    return 0;
}
