#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 1005;
int m, n, x, y, mp[N][N], ans;
int main() {
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
        }
    }
    cin >> x >> y;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (mp[i][j] == x) {
                if (mp[i - 1][j] == y) {
                    ans++;
                    continue;
                } else if (mp[i][j - 1] == y) {
                    ans++;
                    continue;
                } else if (mp[i + 1][j] == y) {
                    ans++;
                    continue;
                } else if (mp[i][j + 1] == y) {
                    ans++;
                    continue;
                } else {
                    continue;
                }
            } else {
                continue;
            }
        }
    }
    cout << ans;
    return 0;
}