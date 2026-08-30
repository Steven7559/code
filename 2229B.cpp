#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
int t, n, a[N], b[N];
signed main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        for (int i = 1; i <= n; i++) {
            if (a[i] > b[i])
                swap(a[i], b[i]);
        }
        int maxn = -1;
        for (int i = 1; i <= n; i++)
            maxn = max(maxn, a[i]);
        for (int i = 1; i <= n; i++)
            maxn += b[i];
        cout << maxn << endl;
    }
    return 0;
}