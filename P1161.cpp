#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, t, x, ans;
double a;
signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a >> t;
        for (int j = 1; j <= t; j++) {
            x = a * j;
            ans ^= x;
        }
    }
    cout << ans;
    return 0;
}