#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5;
int n, a[N], b[N], ans, l, r, mid;
bool check() {
    if (mid == 1)
        return 1;
    for (int i = 0; i < mid; i++) {
        b[i] = a[i];
    }
    sort(b + 1, b + mid);
    int ans = n - mid;
    for (int i = 1; i < mid; i++) {
        if (b[i] > ans)
            return 0;
        ans++;
    }
    return 1;
}
signed main() {
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
    }
    l = 0, r = n;
    while (l <= r) {
        mid = (l + r) / 2;
        if (check()) {
            ans = mid;
            l = mid + 1;
        } else
            r = mid - 1;
    }
    printf("%lld\n", n - ans);
    return 0;
}
