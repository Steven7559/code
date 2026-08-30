#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m, r, c, x, xx, y, yy;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n >> m >> r >> c >> x >> y >> xx >> yy;
    int ans = (xx / r - x / r + 1) * (yy / c - y / c + 1);
    cout << ans;
    return 0;
}