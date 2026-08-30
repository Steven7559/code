#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a1, a2, b1, b2, a3, b3, c;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> c;
    int T = max(max(b1, b2), b3);
    int t1 = a1 - c * (T - b1);
    int t2 = a2 - c * (T - b2);
    int t3 = a3 - c * (T - b3);
    int tm = min(t1, min(t2, t3));
    if (tm == t1) {
        cout << 1;
    } else if (tm == t2) {
        cout << 2;
    } else {
        cout << 3;
    }
    cout << " " << tm;
    return 0;
}