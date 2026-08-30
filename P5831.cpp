#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k, a[35][35];  // round i cow x p?
signed main() {
    cin >> k >> n;
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            int x;
            cin >> x;
            a[i][x] = j;
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int f = 1;
            for (int q = 1; q <= k; q++) {
                if (a[q][i] <= a[q][j]) {
                    f = 0;
                }
            }
            if (f)
                ans++;
        }
    }
    cout << ans;
    return 0;
}