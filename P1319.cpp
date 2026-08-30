#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 205;
int n, a, b = 0, ans[N * N], cnt = 1;
signed main() {
    cin >> n;
    while (cin >> a) {
        for (int i = 1; i <= a; i++) {
            ans[cnt++] = b;
        }
        b ^= 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            int pos = n * i + j;
            cout << ans[pos];
        }
        cout << endl;
    }
    return 0;
}