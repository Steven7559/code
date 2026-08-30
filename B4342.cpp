#include <bits/stdc++.h>
// #define int long long
using namespace std;
const int N = 1e5 + 5;
int calc(int d) {
    int m = 0;
    m += 20 * min(d, 10);
    d -= min(d, 10);
    int p5 = min(d, 50 - 10) / 5;
    if (min(d, 50 - 10) % 5 != 0) {
        p5++;
    }
    m += 80 * p5;
    d -= min(d, 50 - 10);
    int p10 = d / 10;
    if (d % 10 != 0) {
        p10++;
    }
    m += 120 * p10;
    return m;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin >> x;
    int minn = INT_MAX;
    for (int i = 0; i <= x; i++) {
        minn = min(minn, calc(i) + calc(x - i));
    }
    cout << minn;
    return 0;
}