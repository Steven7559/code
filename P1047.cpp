#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e4 + 5;
int n, m, x, y, cnt;
bool f[N];
signed main() {
    cin >> n >> m;
    while (m--) {
        cin >> x >> y;
        for (int i = x; i <= y; i++) {
            f[i] |= 1;
        }
    }
    for (int i = 0; i <= n; i++) {
        cnt += f[i];
    }
    cout << n - cnt + 1;
    return 0;
}