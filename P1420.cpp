#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e4 + 5;
int n, a[N], cnt, t = 1;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 2; i <= n; i++) {
        if (a[i] == a[i - 1] + 1)
            t++;
        else
            t = 1;
        cnt = max(cnt, t);
    }
    cout << cnt;
    return 0;
}
