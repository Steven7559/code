#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll x[5005], y[5005], d;
int dp[5005], n;  // i remove dp[i] points
int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> n >> d;
        for (int i = 1; i <= n; i++) {
            cin >> x[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> y[i];
        }
        memset(dp, 0x3f, sizeof dp);
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                bool f = 1;
                for (int k = j + 1; k < i; k++) {
                    ll A = (y[k] - y[j]) * (x[i] - x[j]);
                    ll B = (y[i] - y[j]) * (x[k] - x[j]);
                    ll C = d * (x[i] - x[j]);
                    if (abs(A - B) > C) {
                        f = 0;
                        break;
                    }
                }
                if (f)
                    dp[i] = min(dp[i], dp[j] + 1);
            }
        }
        cout << n - dp[n] << endl;
    }
}
