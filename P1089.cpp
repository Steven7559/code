#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, x;  // 手里的钱，存款，预算
signed main() {
    for (int i = 1; i <= 12; i++) {
        n += 300;
        cin >> x;
        n -= x;
        if (n < 0) {
            cout << -i;
            return 0;
        }
        int t = n % 100;
        m += n - t;
        n = t;
    }
    cout << m + 0.2 * m + n;
    return 0;
}