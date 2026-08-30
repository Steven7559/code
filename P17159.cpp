#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, m, minn = 1e9, maxn;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    while (n--) {
        maxn = -1e9;
        for (int i = 1; i <= m; i++) {
            int x;
            cin >> x;
            maxn = max(maxn, x);
        }
        minn = min(minn, maxn);
    }
    cout << minn << endl;
    return 0;
}