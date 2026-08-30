#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, x, a[1000005], b[1000005];
int f(int n) {
    if (b[n])
        return a[n];
    b[n] = 1;
    if (n == 0)
        return a[n] = 0;
    else
        return a[n] = (n % 10 == x) + f(n / 10);
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += f(i);
    }
    cout << cnt;
    return 0;
}
