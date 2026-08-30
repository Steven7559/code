#include <bits/stdc++.h>
using namespace std;
const int N = 505;
int a[N][N], n, m, l, r, k;
int main() {
    cin >> n >> m >> k >> l >> r;
    while (k--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (z <= l)
            a[x][y] = 100;
        else if (z >= r)
            a[x][y] = 0;
        else
            a[x][y] = z;
    }
    for (int i = 1; i <= n; i++) {
        int ans = 0;
        for (int j = 1; j <= m; j++) {
            ans += a[i][j];
        }
        printf("%d ", ans);
    }
    return 0;
}