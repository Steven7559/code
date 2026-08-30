#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 105;
int a[N][N], n, m, q, x, y, cnt, mem[N][N], f[N][N];
void dfs(int i, int j) {
    //	cout << cnt << ":" << i << ' ' << j << endl;
    if (i == 0 or j == 0 or i == n + 1 or j == m + 1) {
        return;
    }
    if ((i == x and j == y and cnt != 0) or f[i][j]) {
        cnt = -1;
        return;
    }
    f[i][j] = 1;
    cnt++;
    if (a[i][j] == 1) {
        dfs(i - 1, j);
    } else if (a[i][j] == 2) {
        dfs(i + 1, j);
    } else if (a[i][j] == 3) {
        dfs(i, j - 1);
    } else {
        dfs(i, j + 1);
    }
}
signed main() {
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= q; i++) {
        memset(f, 0, sizeof f);
        cin >> x >> y;
        cnt = 0;
        if (mem[x][y] == 0) {
            dfs(x, y);
            mem[x][y] = cnt;
        }
        cout << mem[x][y] << endl;
    }
    return 0;
}
