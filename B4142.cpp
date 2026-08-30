#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL ve, vm, vt, e, m, t, total, ans1, ans2;
int main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> ve >> vm >> vt >> e >> m >> t;
    total = ve * e + vm * m;
    ans1 = ceil(total * 1.0 / vt);
    ans2 = ceil(ans1 * 1.0 / t);
    cout << ans2;
    return 0;
}
