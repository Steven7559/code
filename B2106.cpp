#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 105;
int n, m, a[N][N];
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
