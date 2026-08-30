#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[105][105];
int v[105][105][10];
int dx[9] = {0, 0, 1, 1, 1, 0, -1, -1, -1};
int dy[9] = {0, -1, -1, 0, 1, 1, 1, 0, -1};
struct node {
    int x, y, step, way;
};
queue< node > q;
signed main() {
    int n, m;
    memset(v, 0, sizeof(v));
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    q.push({1, 1, 0, 9});
    while (!q.empty()) {
        node now = q.front();
        q.pop();
        if (now.x == m && now.y == n) {
            cout << now.step << endl;
            return 0;
        }
        for (int i = 1; i <= 8; i++) {
            if (now.way != i) {
                int tx = now.x + dx[i] * a[now.x][now.y];
                int ty = now.y + dy[i] * a[now.x][now.y];
                int ts = now.step;
                if (tx <= m && ty <= n && tx >= 1 && ty >= 1 &&
                    v[tx][ty][i] == 0) {
                    v[tx][ty][i] = 1;
                    q.push({tx, ty, ts + 1, i});
                }
            }
        }
    }
    cout << "NEVER";
}