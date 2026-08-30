#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 35;
char mp[N][N];
int h, w, ans = 1e9, fx, qx, qy, dis[N][N][5],
          d[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
void dfs(int x, int y, int w, int s) {
    if (dis[x][y][w] <= s || ans <= s)
        return;
    dis[x][y][w] = s;
    if (mp[x][y] == 'F')
        ans = min(ans, dis[x][y][w]);
    bool flag = 0;
    if (mp[x + d[w][0]][y + d[w][1]] != '.')
        flag = 1, dfs(x + d[w][0], y + d[w][1], w, s);
    // 向前
    if (mp[x + d[(w + 1) % 4][0]][y + d[(w + 1) % 4][1]] != '.')
        flag = 1,
        dfs(x + d[(w + 1) % 4][0], y + d[(w + 1) % 4][1], (w + 1) % 4, s + 1);
    // 向左
    if (mp[x + d[(w + 3) % 4][0]][y + d[(w + 3) % 4][1]] != '.')
        flag = 1,
        dfs(x + d[(w + 3) % 4][0], y + d[(w + 3) % 4][1], (w + 3) % 4, s + 5);
    // 向右
    if (!flag && mp[x + d[(w + 2) % 4][0]][y + d[(w + 2) % 4][1]] != '.')
        dfs(x + d[(w + 2) % 4][0], y + d[(w + 3) % 4][1], (w + 2) % 4, s + 10);
    // 向后
}
signed main() {
    cin >> h >> w;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> mp[i][j];
            if (mp[i][j] == 'N') {
                fx = 0;
                qx = i;
                qy = j;
            }
            if (mp[i][j] == 'W') {
                fx = 1;
                qx = i;
                qy = j;
            }
            if (mp[i][j] == 'S') {
                fx = 2;
                qx = i;
                qy = j;
            }
            if (mp[i][j] == 'E') {
                fx = 3;
                qx = i;
                qy = j;
            }
        }
    }
    memset(dis, 0x3f, sizeof dis);
    dfs(qx, qy, fx, 0);
    cout << ans;
    return 0;
}