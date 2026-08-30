#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 105;
int n, m, ans[N][N];
void f(int x, int y) {
    ans[x - 1][y - 1]++;
    ans[x - 1][y + 1]++;
    ans[x - 1][y]++;
    ans[x + 1][y - 1]++;
    ans[x + 1][y + 1]++;
    ans[x + 1][y]++;
    ans[x][y - 1]++;
    ans[x][y + 1]++;
    ans[x][y] = INT_MIN;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char c;
            cin >> c;
            if (c == '*')
                f(i, j);
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (ans[i][j] < 0)
                cout << '*';
            else
                cout << ans[i][j];
        }
        cout << "\n";
    }
    return 0;
}