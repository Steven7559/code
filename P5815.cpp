#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 55;
int n, a[N];  // J=0
bool f(int mid) {
    int sum = 0;  // 各取mid张牌后要放回去sum张
    for (int i = 0; i <= n; i++) {
        int x = mid - a[i];
        if (x >= 0)
            sum += x;
        if (sum > mid)
            return 0;
    }
    return sum <= mid;
}
signed main() {
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
    }
    int l = 0, r = 2e9, mid = (l + r + 1) / 2;
    while (l < r) {
        mid = (l + r + 1) / 2;
        if (f(mid))
            l = mid;
        else
            r = mid - 1;
    }
    cout << l;
    return 0;
}