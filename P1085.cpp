#include <bits/stdc++.h>
#define int long long
using namespace std;
int x, y, z, maxn = 0, ans;
signed main() {
    for (int i = 1; i <= 7; i++) {
        cin >> x >> y;
        z = x + y;
        if (z > maxn and z > 8) {
            maxn = z;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}