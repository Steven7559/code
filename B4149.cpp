#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[7], b[7], c[7];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 1; i <= 6; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= 6; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= 3; i++) {
        c[i] = max(a[i], b[i]);
    }
    for (int i = 4; i <= 6; i++) {
        c[i] = min(a[i], b[i]);
    }
    ll ans = 1;
    for (int i = 1; i <= 3; i++) {
        ans *= (c[i + 3] - c[i]) + 1;
        ans = max(ans, 0ll);
    }
    cout << ans;
    return 0;
}
